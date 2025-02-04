#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-ascending-subarray-sum/description/?envType=daily-question&envId=2025-02-04

*/
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int currentSubarraySum = nums[i];

            for (int j = i + 1; j < nums.size() and nums[j] > nums[j - 1]; j++) {
                currentSubarraySum += nums[j];
            }

            maxSum = max(maxSum, currentSubarraySum);
        }

        return maxSum;
    }
};
int main() {


    return 0;
}