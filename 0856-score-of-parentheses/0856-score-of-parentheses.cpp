class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.length();
        int score = 0;
        int dep = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                dep++;
            }
            else{
                dep--;
                if(s[i - 1] == '('){
                    score += (1 << dep);
                }
            }
        }
        return score;
    }
};