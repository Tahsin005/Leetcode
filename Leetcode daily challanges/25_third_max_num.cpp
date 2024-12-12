#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/third-maximum-number/
        
*/         
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> st;
        for (auto val: nums) st.insert(val);

        vector<int> vec; 
        for (auto val: st) vec.push_back(val);

        if (vec.size() < 3) return vec[vec.size() - 1];

        reverse(vec.begin(), vec.end());

        return vec[2];
    }
}; 
int main(){
    
    
    return 0;
}