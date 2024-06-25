#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/monotonic-array/
        
*/          
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {

        return is_sorted(nums.begin(),nums.end()) or is_sorted(nums.rbegin(),nums.rend());
    }
};
int main(){
    
    
    return 0;
}