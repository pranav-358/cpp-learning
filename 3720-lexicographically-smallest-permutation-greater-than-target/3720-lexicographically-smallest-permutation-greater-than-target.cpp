class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.length();
        vector<int> count(26, 0);
        
        for (char c : s) {
            count[c - 'a']++;
        }

        vector<int> temp_count = count;
        int max_prefix = 0;
        while (max_prefix < n && temp_count[target[max_prefix] - 'a'] > 0) {
            temp_count[target[max_prefix] - 'a']--;
            max_prefix++;
        }

        for (int i = max_prefix; i >= 0; i--) {
            if (i == n) continue;

            vector<int> rem = count;
            for (int j = 0; j < i; j++) {
                rem[target[j] - 'a']--;
            }

           
            int best_char = -1;
            for (int c = target[i] - 'a' + 1; c < 26; c++) {
                if (rem[c] > 0) {
                    best_char = c;
                    break;
                }
            }

            if (best_char != -1) {
                string ans = target.substr(0, i);
                ans += (char)('a' + best_char);
                rem[best_char]--;
                for (int c = 0; c < 26; c++) {
                    while (rem[c] > 0) {
                        ans += (char)('a' + c);
                        rem[c]--;
                    }
                }
                return ans;
            }
        }

        return "";
    }
};