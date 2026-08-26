class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
         string ans = "";
        int minLen = INT_MAX;
        for (int i = 0; i < s.size(); i++) {
            int ones = 0;
            for (int j = i; j < s.size(); j++) {
                if (s[j] == '1')
                    ones++;
                if (ones == k) {
                    string sub = s.substr(i, j - i + 1);
                    if (sub.length() < minLen) {
                        minLen = sub.length();
                        ans = sub;
                    }
                    else if (sub.length() == minLen && sub < ans) {
                        ans = sub;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};