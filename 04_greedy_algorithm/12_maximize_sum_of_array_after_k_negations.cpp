#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/
        
*/          
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int i = 0, mn = -1, ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            if (k and nums[i] < 0) {
                nums[i] = (-1 * nums[i]);
                k--;
            }
            if (nums[i] < ans) {
                ans = nums[i];
                mn = i;
            }
        }

        if (k) {
            if (k & 1) {
                nums[mn] = (-1 * nums[mn]);
            }
        }

        int sum = 0;
        for (auto val: nums) sum += val;

        return sum;
    }
};
int main(){
    
    
    return 0;
}