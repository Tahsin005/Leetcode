#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/letter-combinations-of-a-phone-number/
        
*/          
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char, vector<string>> mp;
        mp['2'] = {"a", "b", "c"};
        mp['3'] = {"d", "e", "f"};
        mp['4'] = {"g", "h", "i"};
        mp['5'] = {"k", "j", "l"};
        mp['6'] = {"m", "n", "o"};
        mp['7'] = {"p", "q", "r", "s"};
        mp['8'] = {"t", "u", "v"};
        mp['9'] = {"w", "x", "y", "z"};

        int n = digits.size();
        if (!n) return {};
        vector<string> v, temp;
        for (auto j = 0; j < mp[digits[0]].size(); j++) {
            v.push_back(mp[digits[0]][j]);
        }

        for (int i = 1; i < n; i++) {
            for (auto j = 0; j < mp[digits[i]].size(); j++) {
                for (int k = 0; k < v.size(); k++) {
                    temp.push_back(v[k] + mp[digits[i]][j]);
                }
            }
            v = temp;
            temp.clear();
        }
        
        return v;
    }
};
int main(){
    
    
    return 0;
}