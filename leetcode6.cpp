class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last1 = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]) {
                if (last1 != -1) {
                    int diff = i - last1;
                    if (diff <= k) {
                        return false;
                    }
                    last1 = i;
                } else {
                    last1 = i;
                }
            }
        }

        return true;
    }
};
