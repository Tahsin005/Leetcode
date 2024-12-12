#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
https://leetcode.com/problems/group-anagrams/description/

        
*/  
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        int n = strs.size();
        for (int i = 0; i < n; i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            mp[temp].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (auto val: mp) {
            ans.push_back(val.second);
        }
        return ans;
    }
};        
int main(){
    
    
    return 0;
}