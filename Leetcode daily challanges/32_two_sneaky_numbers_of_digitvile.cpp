#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/contest/weekly-contest-415/problems/the-two-sneaky-numbers-of-digitville/description/
        
*/  
class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int, int> mp;

        for (int val: nums) mp[val]++;
        
        vector<int> ans;
        for (auto [x, y]: mp) {
            if (y >= 2) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};        
int main(){
    
    
    return 0;
}