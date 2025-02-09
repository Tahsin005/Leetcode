#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/longest-subarray-of-1s-after-deleting-one-element/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
    public:
        int longestSubarray(vector<int>& nums) {
            int cntZero = 0, ans = 0, n = nums.size();
            int idx = 0;
    
            for (int i = 0; i < n; i++) {
                cntZero += (nums[i] == 0);
    
                while (cntZero > 1) {
                    cntZero -= (nums[idx++] == 0);
                }
    
                ans = max(ans, i - idx);
            }
    
            return ans;
        }
    };
int main() {


    return 0;
}