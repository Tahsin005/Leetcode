#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/
        
*/  
class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<char> uni_letters;
        for (char c : s) {
            uni_letters.insert(c);
        }

        int cnt = 0;
        for (char ch: uni_letters) {
            int i = -1, j = 0;
            for (int k = 0; k < s.length(); k++) {
                if (s[k] == ch) {
                    if (i == -1) {
                        i = k;
                    }
                    j = k;
                }
            }

            set<char> inbetween;

            for (int k = i + 1; k < j; k++) {
                inbetween.insert(s[k]);
            }

            cnt += inbetween.size();
        }

        return cnt;
    }
};
int main(){
    
    
    return 0;
}