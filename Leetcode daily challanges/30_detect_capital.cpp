#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/detect-capital/
        
*/  
class Solution {
public:
    bool isCapital(char ch) {
        return ch >= 'A' and ch <= 'Z';
    }
    bool detectCapitalUse(string word) {
        int num_capitals = 0;
        for(char c : word) {
            if(isCapital(c)) {
                num_capitals++;
            }
        }
        return num_capitals == 0 or (num_capitals == 1 and isCapital(word.at(0))) or num_capitals == word.size();     
    }
};        
int main(){
    
    
    return 0;
}