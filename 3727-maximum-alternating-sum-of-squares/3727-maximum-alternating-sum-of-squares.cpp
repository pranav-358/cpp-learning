
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> sq;

        for (int i = 0; i < n; i++) {
            sq.push_back(1LL * nums[i] * nums[i]);
        }
        sort(sq.begin(), sq.end());
        long long score = 0;

        for (int i = 0; i < n; i++) {
            if (i < n / 2) {
                score -= sq[i];
            } else {
                score += sq[i];
            }
        }
        return score;
    }
};
