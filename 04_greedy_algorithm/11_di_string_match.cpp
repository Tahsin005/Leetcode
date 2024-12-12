#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/di-string-match/
        
*/         
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length(), i = 0, l = 0, r = n;

        vector<int> ans(n + 1);

        while (i < n) {
            if (s[i] == 'I') {
                ans[i] = l++;
            } else {
                ans[i] = r--;
            }
            i++;
        }

        ans[n] = l;

        return ans;
    }
}; 
int main(){
    
    
    return 0;
}