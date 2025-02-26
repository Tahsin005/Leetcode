#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/description/?envType=daily-question&envId=2025-02-26

*/
class Solution {
    public:
        int maxAbsoluteSum(vector<int>& nums) {
            int sum = 0, nax = INT_MIN, nin = INT_MAX, n = nums.size();
    
            int idx = 0;
    
            while (idx < n) {
                sum += nums[idx];
                nax = max(nax, sum);
                if (sum < 0) sum = 0;
    
                idx++;
            }
    
            idx = 0, sum = 0;
    
            while (idx < n) {
                sum += nums[idx];
                nin = min(nin, sum);
                if (sum > 0) sum = 0;
    
                idx++;
            }
    
            return max(abs(nax), abs(nin));
        }
};
int main() {


    return 0;
}