class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       /* 
        int n = nums.size();
        vector<int> ans;

        for(int i =1; i<n; i++){
            bool found = false;

            for(int j=0; j<n; j++){
                if(nums[j]== i){
                    found = true;
                    break;
                }
            }
            if(!found){
                ans.push_back(i);
            }
        }
        return ans; 
        */
    vector<int> ans;
    vector<bool> found(nums.size() + 1, false);
    for (int x : nums)
        found[x] = true;

    for (int i = 1; i <= nums.size(); i++) {
        if (!found[i]){
            ans.push_back(i);
        }
    }
    return ans;
    }
};