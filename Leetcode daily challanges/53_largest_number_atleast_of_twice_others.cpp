#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/largest-number-at-least-twice-of-others/
        
*/          
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n = nums.size();

        int mx = *max_element(nums.begin(), nums.end());
        int index = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] * 2 > mx and nums[i] != mx) {
                return -1;
            } else if (nums[i] == mx) {
                index = i;
            }
        }

        return index;
    }
};
int main(){
    
    
    return 0;
}