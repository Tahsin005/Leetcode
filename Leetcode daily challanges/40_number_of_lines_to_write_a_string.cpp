#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/number-of-lines-to-write-string/
        
*/         
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int cnt = 0;

        int pxls = 0;
        for (int i = 0; i < s.length(); i++) {
            pxls += widths[s[i] - 'a'];
            if (pxls > 100) {
                pxls = widths[s[i] - 'a'];
                cnt++;
            }
        }

        if (pxls != 0) cnt++;

        return {cnt, pxls};
    }
}; 
int main(){
    
    
    return 0;
}