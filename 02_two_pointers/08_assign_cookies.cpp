#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/assign-cookies/
        
*/          
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = 0, j = 0, cnt = 0;
        int gn = g.size(), sn = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (i < gn and j < sn) {
            if (g[i] <= s[j]) {
                i++;
            } 

            j++;
        }

        return i;
    }
};
int main(){
    
    
    return 0;
}