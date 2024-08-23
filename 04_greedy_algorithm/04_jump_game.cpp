#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/jump-game/
        
*/  
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();

        int mxidx = 0;
        for (int i = 0; i < n; i++) {
            if (i > mxidx) return false;
            mxidx = max(mxidx, i + nums[i]);
        }

        return true;
    }
};        
int main(){
    
    
    return 0;
}