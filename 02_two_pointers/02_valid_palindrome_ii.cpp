#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/valid-palindrome-ii/description/
        
*/          
class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while(i <= j)
            if(s[i++] != s[j--]) return false;
        return true;
    }
    bool validPalindrome(string s) {
        if(isPalindrome(s)) return true;
        string one = s, two = s;
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j]) {
                one.erase(one.begin() + i);
                two.erase(two.begin() + j);
                if (isPalindrome(one)) return true;
                else if (isPalindrome(two)) return true;
                else return false;
            }
            i++, j--;
        }

        return false;
    }
};
int main(){
    
    
    return 0;
}