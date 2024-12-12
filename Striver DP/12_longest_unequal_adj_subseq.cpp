#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/longest-unequal-adjacent-groups-subsequence-i/
        
*/       
class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> ans;

        ans.push_back(words[0]);

        int last = groups[0];

        for (int i = 1; i < words.size(); i++) {
            if (groups[i] != last) {
                last = groups[i];
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};   
int main(){
    
    
    return 0;
}