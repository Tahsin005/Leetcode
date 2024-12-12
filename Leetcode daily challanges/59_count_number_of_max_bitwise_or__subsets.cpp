#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/

*/
class Solution {
public:
    int bitwiseOR(const vector<int>& arr) {
        int result = 0;

        for (int num : arr) {
            result |= num;
        }

        return result;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();

        vector<vector<int>> subsets;
        int mxBitOr = 0, cnt = 0;

        for (int i = 0; i < (1 << n); i++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                int mask = 1 << j;
                if ((i & mask) != 0) {
                    subset.push_back(nums[j]);
                }
            }
            subsets.push_back(subset);
            mxBitOr = max(mxBitOr, bitwiseOR(subset));
        }

        for (int i = 0; i < subsets.size(); i++) {
            int temp = bitwiseOR(subsets[i]);
            if (temp == mxBitOr) {
                cnt++;
            }
        }

        return cnt;
    }
};
int main(){


    return 0;
}