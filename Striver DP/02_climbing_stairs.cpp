#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/climbing-stairs/
        
*/          
class Solution {
public:

    int calculate(int idx, map<int, int> &mp) {
        if (idx == 0 or idx == 1) return 1;

        if (mp.find(idx) == mp.end()) mp[idx] = calculate(idx - 1, mp) + calculate(idx - 2, mp);
 
        return mp[idx];
    }
    int climbStairs(int n) {
        map<int, int> mp;
        return calculate(n, mp);
    }
};
int main(){
    
    
    return 0;
}