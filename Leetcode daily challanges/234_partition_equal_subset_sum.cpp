#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/partition-equal-subset-sum/description/?envType=daily-question&envId=2025-04-07

*/
class Solution {
    public:
        bool canPartition(vector<int>& nums) {
            int totalSum = 0;
            for (int num : nums) totalSum += num;

            if (totalSum & 1) return false;

            int targetSum = totalSum / 2;
            vector<bool> dp(targetSum + 1, false);
            dp[0] = true;
            for (int num : nums) {
                for (int currSum = targetSum; currSum >= num; currSum--) {
                    dp[currSum] = dp[currSum] || dp[currSum - num];
                    if (dp[targetSum]) return true;
                }
            }
            return dp[targetSum];
        }
};
int main() {


    return 0;
}