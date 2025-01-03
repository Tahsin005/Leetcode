#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/number-of-ways-to-split-array/description/?envType=daily-question&envId=2025-01-03

*/
class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefSum(n);

        prefSum[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefSum[i] = prefSum[i - 1] + nums[i];
        }

        int cnt = 0;

        for (int i = 0; i < n - 1; i++) {
            long long leftSum = prefSum[i];
            long long rightSum = prefSum[n - 1] - leftSum;

            cnt += (leftSum >= rightSum);
        }

        return cnt;
    }
};
int main(){


    return 0;
}