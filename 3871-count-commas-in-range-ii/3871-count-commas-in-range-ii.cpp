class Solution {
public:
    long long countCommas(long long n) {
        long long total_commas = 0;
        long long threshold = 1000;
        
        while (threshold <= n) {
            total_commas += (n - threshold + 1);
            if (threshold > n / 1000) break;
            threshold *= 1000;
        }
        return total_commas;
            
    }
};