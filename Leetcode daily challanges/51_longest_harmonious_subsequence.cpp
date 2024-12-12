#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/longest-harmonious-subsequence/
        
*/          
class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0, left = 0, right = 0, ans = 0, maxAns = 0;

        while (right < nums.size()) {
            if (nums[right] - nums[left] == 1) {
                ans = right - left + 1;
                maxAns = max(maxAns, ans);
            } else if (nums[right] - nums[left] > 1) {
                while (nums[right] - nums[left] > 1) {
                    left++;
                }
            }
            right++;
        }

        return maxAns;
    }
};
int main(){
    
    
    return 0;
}