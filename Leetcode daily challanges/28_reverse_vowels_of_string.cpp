#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/reverse-vowels-of-a-string/description/
        
*/          
class Solution {
public:
    string reverseVowels(string s) {
        vector<int> indexes;
        bool found_vowel = false;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (ch == 'a' or ch == 'A' or ch == 'e' or ch == 'E' or ch == 'i' or ch == 'I' or ch == 'o' or ch == 'O' or ch == 'u' or ch == 'U') {
                indexes.push_back(i);
                found_vowel = true;
            }
        }

        if (!found_vowel) return s;
        int l = 0, r = indexes.size() - 1;

        while (l < r) {
            swap(s[indexes[l]], s[indexes[r]]);
            l++, r--;
        }

        return s;
    }
};
int main(){
    
    
    return 0;
}