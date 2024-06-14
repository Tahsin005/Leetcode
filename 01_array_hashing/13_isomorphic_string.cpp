#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/isomorphic-strings/description/
        
*/  
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        map<char, char> mp1, mp2;
        for (int i = 0; i < s.length(); i++) {
            if ((mp1.find(s[i]) != mp1.end() and mp1[s[i]] != t[i]) or (mp2.find(t[i]) != mp2.end() and mp2[t[i]] != s[i])) {
                return false;
            }
            mp1[s[i]] = t[i];
            mp2[t[i]] = s[i];
        }

        return true;
    }
};        
int main(){
    
    
    return 0;
}