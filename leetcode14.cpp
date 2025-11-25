class Solution {
public:
    int arrangeCoins(int n) {
        int low = 0, high = n;
        long long cnt = 0;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long sum = mid * (mid + 1) / 2;
            if (sum == n) return mid;
            if (sum < n) {
                cnt = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return cnt;
    }
};
