#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
https://leetcode.com/problems/is-subsequence/description/       

        
*/  
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ptr_s = 0, ptr_t = 0;

        while (ptr_s < s.size() && ptr_t < t.size()) {
            if (s[ptr_s] == t[ptr_t]) {
                ptr_s++;
            }
            ptr_t++;
        }

        return ptr_s >= s.size();
    }
};        
int main(){
    
    
    return 0;
}