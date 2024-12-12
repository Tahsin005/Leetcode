#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/longest-repeating-character-replacement/
        
*/  
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length(), l = 0, r = 0, maxlen = 0;

        map<char, int> hash;
        int changes = 0;
        while (r < n) {
            hash[s[r]]++;

            maxlen = max(maxlen, hash[s[r]]);

            if ((r - l + 1) - maxlen > k) {
                if (hash.find(s[l]) != hash.end()) {
                    hash[s[l]]--;
                    l++;
                }
            } else {
                changes = max(changes, (r - l + 1));
            }
            r++;
        }

        return changes;
    }
};        
int main(){
    
    
    return 0;
}