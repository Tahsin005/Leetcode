#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/minimum-difference-between-highest-and-lowest-of-k-scores/
        
*/     
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 1) return 0;

        int ans = INT_MAX;
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= n - k; i++) {
            ans = min (ans, (nums[i + k - 1] - nums[i]));
        }
        return ans;
    }
};     
int main(){
    
    
    return 0;
}