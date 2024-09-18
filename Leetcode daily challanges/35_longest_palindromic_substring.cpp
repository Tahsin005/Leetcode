#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/longest-palindromic-substring/
        
*/        
class Solution {
public:
    bool isPalindrome(string &s, int i, int j) {
        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++, j--;
        }

        return true;
    }
    string longestPalindrome(string s) {
        string longest = "";

        int n = s.length();

        if (n == 1) return s;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(s, i, j)) {
                    int len = j - i + 1;
                    if (len > longest.length()) {
                        longest = s.substr(i, len);
                    }
                }
            }
        }

        return longest;
    }
};  
int main(){
    
    
    return 0;
}