#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/ransom-note/
        
*/          
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> m; 
     
        for (char ch: magazine) 
            if (m.find(ch) == m.end()) m[ch] = 1;
            else m[ch]++;

        for (auto ch: ransomNote) {
            if (m.find(ch) != m.end() and m[ch]) m[ch]--;
            else return false;
        }

        return true;
    }
};
int main(){
    
    
    return 0;
}