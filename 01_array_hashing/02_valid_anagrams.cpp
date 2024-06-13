#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/valid-anagram/description/
        
*/          
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s_freq, t_freq;
        for (auto &c: s) s_freq[c]++;
        for (auto &c: t) t_freq[c]++;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (s_freq[ch] != t_freq[ch]) {
                return false;
            }
        }

        return true;
    }
};
int main(){
    
    
    return 0;
}