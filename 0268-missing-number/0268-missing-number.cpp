class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n * (n + 1) / 2;
        int sum_arr = 0;
        for(int i = 0; i<n; i++){
            sum_arr += nums[i];
        }
        int result = sum - sum_arr;
        return result;
    }
};