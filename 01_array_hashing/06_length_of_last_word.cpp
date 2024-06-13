#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/length-of-last-word/description/
        
*/  
class Solution {
public:
    bool isChar(char ch) {
        return (ch >= 'A' and ch <= 'Z') or (ch >= 'a' and ch <= 'z');
    }
    int lengthOfLastWord(string s) {
        bool start = false, end = false;
        int n = s.length();
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (isChar(s[i]) and !start) {
                start = true;
                cnt++;
            } else if (isChar(s[i]) and start) {
                cnt++;
            } else if (start and !isChar(s[i])) {
                break;
            }
        }

        return cnt;
    }
};        
int main(){
    
    
    return 0;
}