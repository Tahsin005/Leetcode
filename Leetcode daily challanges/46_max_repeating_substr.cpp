#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/maximum-repeating-substring/
        
*/  
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int cnt = 0;
        string repeatedWord = word;
        while (sequence.find(repeatedWord) != string::npos) {
            cnt++;
            repeatedWord = repeatedWord + word;
        }
        return cnt;
    }
};
int main(){
    
    
    return 0;
}