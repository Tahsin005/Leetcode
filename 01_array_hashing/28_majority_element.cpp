#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/majority-element/
        
*/          
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int, int> mp;
        int res = 0, majority = 0;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
            if (mp[nums[i]] > majority) {
                res = nums[i];
                majority = mp[nums[i]];
            }
        }

        return res;
    }
};
int main(){
    
    
    return 0;
}