#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
https://leetcode.com/problems/longest-common-prefix/description/

        
*/  
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) {
            return strs[0];
        }
        int mn = 10000;
        string mns = "";
        for (int i = 0; i < strs.size(); i++) {
            int x = strs[i].length();
            if (mn > x) {
                mn = x;
                mns = strs[i];
            }
            if (strs[i] == "") {
                return "";
            }
        }
        string ans = "";
        for (int i = 0; i < mn; i++) {
            char candid_char = mns[i];
            bool all_have_it = true;
            for (int j = 0; j < strs.size(); j++) {
                // cout << strs[j] << " ";
                if (strs[j][i] != candid_char) {
                    all_have_it = false;
                    break;
                }
            }
            if (all_have_it) {
                ans += candid_char;
            } else {
                break;
            }
        }
        return ans;
    }
};        
int main(){
    
    
    return 0;
}