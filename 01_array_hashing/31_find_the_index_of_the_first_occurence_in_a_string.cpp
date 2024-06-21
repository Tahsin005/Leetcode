#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
        
*/          
class Solution {
public:
    int findSubstring (const string& str, const string& substr) {
        int found = str.find(substr);
        if (found != string::npos) {
            return found;
        }
        return -1;
    }
    int strStr(string haystack, string needle) {
        return findSubstring(haystack, needle);
    }
};
int main(){
    
    
    return 0;
}