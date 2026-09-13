class Solution {
public:
    int climbStairs(int n) {
        if(n == 1){
            return 1;
        }
        int a = 1;
        int b = 2;
        for(int i=2; i<n; i++){
            int count = a + b;
            a = b;
            b = count;
        }
        return b;
    }
};