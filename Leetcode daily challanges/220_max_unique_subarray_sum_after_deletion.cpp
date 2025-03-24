#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-unique-subarray-sum-after-deletion/description/

*/
class Solution {
    public:
        int maxSum(vector<int>& nums) {
            int sum = 0, mxNeg = INT_MIN;
            set<int> st;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > 0) st.insert(nums[i]);
                else mxNeg = max(mxNeg, nums[i]);
            }
            for (auto val : st) {
                sum += val;
            }
            if (st.size()) return sum;
            else return mxNeg;
        }
};
int main() {


    return 0;
}