class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int maxSum = 0;
        
        for(int i = 0; i< m; i++){
            int sum = 0;
            for(int j = 0; j< accounts[i].size(); j++){
                sum += accounts[i][j];
            }
            if(sum > maxSum){
                maxSum = sum;
            }
        }
        return maxSum;
    }
};