#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
        
*/  
class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        int n = s.length(), i = 0;
        string word = "";
        while (i < n) {
            if (s[i] == ' ') {
                i++;
                vec.push_back(word);
                word = "";
                continue;
            }
            word += s[i];
            i++;
        }
        if (word != "") {
            vec.push_back(word);
        }

        string ans = "";

        for (auto val: vec) {
            reverse(val.begin(), val.end());
            ans += val;
            ans += " ";
        }
        ans.pop_back();
        return ans;
    }
};        
int main(){
    
    
    return 0;
}