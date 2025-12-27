class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int> v0, v1, v2;
        for (auto &u: nums) {
            if (u % 3 == 0) v0.push_back(u);
            if (u % 3 == 1) v1.push_back(u);
            if (u % 3 == 2) v2.push_back(u);
        }
        sort(v0.rbegin(), v0.rend());
        sort(v1.rbegin(), v1.rend());
        sort(v2.rbegin(), v2.rend());
        int sum = 0;
        if (v0.size() > 2) {
            sum=max(sum, v0[0] + v0[1] + v0[2]);
        }

        if (v1.size() > 2) {
            sum = max(sum, v1[0] + v1[1] + v1[2]);
        }

        if (v2.size() > 2) {
            sum = max(sum, v2[0] + v2[1] + v2[2]);
        }

        if (v0.size() > 0 && v1.size() > 0 && v2.size() > 0) {
            sum = max(sum, v0[0] + v1[0] + v2[0]);
        }
        
        return sum;
    }
};
