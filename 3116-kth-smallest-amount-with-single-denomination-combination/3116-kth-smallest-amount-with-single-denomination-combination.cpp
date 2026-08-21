class Solution {
public:
    long long findKthSmallest(vector<int>& coins, int k) {
       long long low = 1;
        long long high = 1LL * *min_element(coins.begin(), coins.end()) * k;
        while (low < high) {
            long long mid = (low + high) / 2;
            long long count = 0;
            for (int mask = 1; mask < (1 << coins.size()); mask++) {

                long long l = 1;
                int cnt = 0;
                for (int i = 0; i < coins.size(); i++) {
                    if (mask & (1 << i)) {
                        l = lcm(l, (long long)coins[i]);
                        cnt++;
                    }
                }
                if (l > mid) continue;

                if (cnt % 2)
                    count += mid / l;
                else
                    count -= mid / l;
            }
            if (count >= k)
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};