#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/?envType=daily-question&envId=2024-07-03
        
*/          
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        if (n <= 4) {
            return 0;
        }

        sort (nums.begin(), nums.end());
        int ans = nums.back() - nums[0];
        for (int i = 0; i < 4; i++) {
            ans = min(ans, nums[nums.size() - (3 - i) - 1] - nums[i]);
        }

        return ans;
    }
};
int main(){
    
    
    return 0;
}