#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/maximum-xor-for-each-query/

*/
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxValueOfK = (1 << maximumBit) - 1;

        vector<int> ans;

        int XOR = 0;

        for (int i = 0; i < nums.size(); i++) {
            XOR ^= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(XOR ^ maxValueOfK);
            XOR ^= nums[nums.size() - 1 - i];
        }

        return ans;
    }
};
int main(){


    return 0;
}