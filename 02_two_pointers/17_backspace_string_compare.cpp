#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/backspace-string-compare/description/
        
*/  
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string final1 = "", final2 = "";
        int i = 0;
        while (i < s.length()) {
            if (s[i] != '#') {
                final1 += s[i];
            } else {
                if (final1.length()) {
                    final1.pop_back();
                }
            }
            i++;
        }
        i = 0;
        while (i < t.length()) {
            if (t[i] != '#') {
                final2 += t[i];
            } else {
                if (final2.length()) {
                    final2.pop_back();
                }
            }
            i++;
        }

        return final1 == final2;
    }
};        
int main(){
    
    
    return 0;
}