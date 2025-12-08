class Solution {
public:
    long long binary_reflection(int x) {
        long long ans = 0;
        for (; x; x >>= 1) {
            ans += (ans << 1LL) + (x & 1);
        }
        return ans;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [&](int x, int y) {
            return binary_reflection(x) == binary_reflection(y)? x < y: binary_reflection(x) < binary_reflection(y);
        });

        return nums;
    }
};
