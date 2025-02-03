#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/?envType=daily-question&envId=2025-02-03

*/
class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int incLength = 1, decLength = 1;
        int maxLength = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] > nums[i]) {
                incLength++;
                decLength = 1;
            } else if (nums[i + 1] < nums[i]) {
                decLength++;
                incLength = 1;
            } else {
                incLength = 1;
                decLength = 1;
            }

            maxLength = max(maxLength, max(incLength, decLength));
        }
        return maxLength;
    }
};
int main() {


    return 0;
}