#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/find-first-palindromic-string-in-the-array/description/
        
*/          
class Solution {
public:
    bool isPalindrome(string &s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++, j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (isPalindrome(words[i])) {
                return words[i];
            }
        }

        return "";
    }
};
int main(){
    
    
    return 0;
}