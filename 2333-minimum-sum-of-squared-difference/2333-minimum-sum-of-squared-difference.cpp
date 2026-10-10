
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)k1 + k2;
        int mx = 0;
        long long total = 0;
        
        for (int i = 0; i < n; i++) {
            nums1[i] = abs(nums1[i] - nums2[i]);
            mx = max(mx, nums1[i]);
            total += nums1[i];
        }
        if (k >= total)
            return 0;

        int low = 0, high = mx;

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long need = 0;

            for (int i = 0; i < n; i++) {
                if (nums1[i] > mid)
                    need += nums1[i] - mid;
            }
            if (need <= k)
                high = mid;
            else
                low = mid + 1;
        }
        int x = low;
        long long need = 0;

        for (int i = 0; i < n; i++) {
            if (nums1[i] > x)
                need += nums1[i] - x;
        }

        long long rem = k - need;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            nums1[i] = min(nums1[i], x);

            if (nums1[i] == x && rem > 0) {
                nums1[i]--;
                rem--;
            }
            ans += 1LL * nums1[i] * nums1[i];
        }
        return ans;
    }
};