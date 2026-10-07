class Solution {
public:
    set<string> ans;
    void solve(string &s, int i, int left, int right, int balance, string cur) {

        if (i == s.size()) {
            if (left == 0 && right == 0 && balance == 0){
                ans.insert(cur);
            }return;
        }
        if (s[i] == '(') {
            if (left > 0){
                solve(s, i + 1, left - 1, right, balance, cur);
            }
            solve(s, i + 1, left, right,balance + 1, cur + '(');
        }
        else if (s[i] == ')') {
            if (right > 0){
                solve(s, i + 1, left, right - 1, balance, cur);
            }
            if (balance > 0){
                solve(s, i + 1, left, right, balance - 1, cur + ')');
            }
        }
        else {
            solve(s, i + 1, left, right, balance, cur + s[i]);
        }
    }
    vector<string> removeInvalidParentheses(string s) {
        int left = 0, right = 0;
        for (char c : s) {
            if (c == '(') {
                left++;
            }
            else if (c == ')') {
                if (left > 0){
                    left--;
                }
                else{
                    right++;
                }
            }
        }
        solve(s, 0, left, right, 0, "");
        return vector<string>(ans.begin(), ans.end());
    }
};