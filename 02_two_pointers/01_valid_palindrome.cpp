#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/valid-palindrome/description/
        
*/  
class Solution {
public:
    bool checkPalindrome(const string& s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            while (left < right && !isalnum(s[right])) {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool isAlphanumeric(char c) {
        return isalnum(static_cast<unsigned char>(c));
    }
    bool isPalindrome(string s) {
        string after = "";
        for (int i = 0; i < s.length(); i++) {
            if (isAlphanumeric(s[i])) {
                if (s[i] >= 'A' and s[i] <= 'Z') {
                    char ch = s[i] | 0x20;
                    after += ch;
                } else {
                    after += s[i];
                }
            }
        }

        return checkPalindrome(after);
    }
};        
int main(){
    
    
    return 0;
}