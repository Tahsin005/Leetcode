#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/reverse-only-letters/
        
*/          
class Solution {
public:
    bool isEnglishLetter(char &ch) {
        return (ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z');
    }
    string reverseOnlyLetters(string s) {
        int i = 0, j = 0, n = s.length();
        string allChars = "";
        while (j < n) {
            if (isEnglishLetter(s[j])) {
                allChars += s[j];
            }
            j++;
        }

        j = 0;
        reverse(allChars.begin(), allChars.end());
        while (j < n) {
            if (isEnglishLetter(s[j])) {
                s[j] = allChars[i];
                i++;
            }
            j++;
        }

        return s;
    }
};
int main(){
    
    
    return 0;
}