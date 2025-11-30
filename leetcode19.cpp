class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long s = 0;
        for (int x : nums) s += x; 

        int t = s % p;
        if (t == 0) return 0;

        unordered_map<int, int> h;
        h[0] = -1;
        
        long long pre_sum = 0;
        int min_len = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            pre_sum += nums[i];
            int rem = pre_sum % p; 

            int n = (rem - t + p) % p;

            if (h.count(n)) {
                min_len = min(min_len, i - h[n]);
            }

            h[rem] = i;
        }

        return (min_len < nums.size()) ? min_len : -1;
    }
};
