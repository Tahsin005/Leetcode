#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
        
*/          
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string final1 = "", final2 = "";
        for (string word: word1) {
            final1 += word;
        }
        for (string word: word2) {
            final2 += word;
        }

        return final1 == final2;
    }
};
int main(){
    
    
    return 0;
}