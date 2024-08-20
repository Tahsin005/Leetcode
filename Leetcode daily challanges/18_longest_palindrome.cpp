#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/longest-palindrome/description/
        
*/  
class Solution {
public:
    int longestPalindrome(string s) {
        if (s.length() == 1) {
            return 1;
        }

        map<char, int> mp;

        for (auto ch: s) {
            mp[ch]++;
        }

        bool flag = false;
        int cnt = 0;

        for (auto i : mp){
            if (i.second % 2 == 0) cnt += i.second;
            else {
                cnt += i.second - 1;
                flag = true;
            }
        }

        return (flag) ? cnt + 1: cnt;
    }
};        
int main(){
    
    
    return 0;
}