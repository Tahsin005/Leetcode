#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/word-pattern/description/
        
*/     
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string, char> mp1;
        map<char, char> mp2;

        stringstream ss(s);
        string word;

        char i = 'a';

        string a, b;

        while (ss >> word) {
            if (mp1.find(word) == mp1.end()) {
                mp1[word] = i;
                i++;
            }

            a.push_back(mp1[word]);
        }

        i = 'a';

        for (int j = 0; j < pattern.length(); j++) {
            if (mp2.find(pattern[j]) == mp2.end()) {
                mp2[pattern[j]] = i;
                i++;
            }
            
            b.push_back(mp2[pattern[j]]);
        }

        if (a == b) return true;

        return false;
    }
};     
int main(){
    
    
    return 0;
}