class Solution {
    int memo[501][501];
    int prefixSum[505];

    int findBestScore(const vector<int>& stoneValue, int left, int right) {
        if (left == right) {
            return 0;
        }
        if (memo[left][right] != -1) {
            return memo[left][right];
        }
        int max_score = 0;
        for (int i = left; i < right; ++i) {
            int left_weight = prefixSum[i + 1] - prefixSum[left];
            int right_weight = prefixSum[right + 1] - prefixSum[i + 1];
            
            if (left_weight < right_weight) {
                max_score = max(max_score, left_weight + findBestScore(stoneValue, left, i));
            } else if (left_weight > right_weight) {
                max_score = max(max_score, right_weight + findBestScore(stoneValue, i + 1, right));
            } else {
                int best_future = max(findBestScore(stoneValue, left, i), findBestScore(stoneValue, i + 1, right));
                max_score = max(max_score, left_weight + best_future);
            }
        }
        return memo[left][right] = max_score;
    }
public:
    int stoneGameV(vector<int>& stoneValue) {
        int n = stoneValue.size();
        for (int i = 0; i <= n; i++) {
            for (int j = 0; j <= n; j++) {
                memo[i][j] = -1;
            }
        }
        prefixSum[0] = 0;
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + stoneValue[i];
        }
        return findBestScore(stoneValue, 0, n - 1);
    }
};