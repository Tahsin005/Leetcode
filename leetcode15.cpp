class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());

        vector<int> prefix(nums.size(), 0);
        prefix[0] = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            prefix[i] = nums[i] + prefix[i - 1];
        }

        vector<int> ans;
        for (int i = 0; i < queries.size(); i++) {
            int low = 0, high = nums.size() - 1, index = -1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (prefix[mid] <= queries[i]) {
                    index = mid;
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            if (index != -1) ans.push_back(index + 1);
            else ans.push_back(0);
        }

        return ans;
    }
};
