class Solution {
    int dp[100001];
public:
    bool winnerSquareGame(int n) {
        if(n == 0){
            return false;
        }
         if (dp[n] != -1){
            return dp[n];
        }
        for(int i = 1; i * i <= n; i++){
            if(winnerSquareGame(n - i * i) == false){
            return dp[n] = true;
        }
    }
    return dp[n] = false;
    }
     Solution() {
        fill(dp, dp + 100001, -1);
    }
};