#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/merge-strings-alternately/
        
*/          
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int min_len = min (word1.length(), word2.length());
        int i = 0;
        for (i = 0; i < min_len; i++) {
            ans += word1[i];
            ans += word2[i];
        }
        if (word1.length() > word2.length()) {
            while (i < word1.length()) {
                ans += word1[i++];
            }
        } else if (word1.length() < word2.length()) {
            while (i < word2.length()) {
                ans += word2[i++];
            }
        }

        return ans;
    }
};
int main(){
    
    
    return 0;
}