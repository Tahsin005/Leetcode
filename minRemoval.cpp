class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int ans = n, right = 0;
        for (int i = 0; i < n; i++) {
            while (right < n and nums[right] <= static_cast<long long>(nums[i]) * k) {
                right++;
            }
            ans = min(ans, n - (right - i));
        }

        return ans;
    }
};
