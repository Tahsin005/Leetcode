#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/intersection-of-two-arrays/description/
        
*/         
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> mp;
        for (int val: nums1) mp[val] = true;

        vector<int> ans;
        map<int, int> temp;
        for (int val: nums2) {
            if (mp.find(val) != mp.end() and temp.find(val) == temp.end()) {
                ans.push_back(val);
                temp[val]++;
            }
        }

        return ans;
    }
}; 
int main(){
    
    
    return 0;
}