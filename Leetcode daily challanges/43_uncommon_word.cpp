#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/uncommon-words-from-two-sentences/
        
*/       
class Solution {
public:
    void breakString(string ss, vector<string>& s) {
        string temp = "";
        for (auto it : ss) {
            if (it == ' ') {
                s.push_back(temp);
                temp = "";
            } else {
                temp.push_back(it);
            }
        }
        if(!temp.empty()) s.push_back(temp);
        return;
    }
    vector<string> uncommonFromSentences(string s1, string s2) {
        map<string, int> mp;

        vector<string> a, b, ans;
        breakString(s1, a);
        breakString(s2, b);

        for (int i = 0; i < a.size(); i++) {
            mp[a[i]]++;
        }
        for (int i = 0; i < b.size(); i++) {
            mp[b[i]]++;
        }

        for (auto &[x, y]: mp) {
            if (y == 1) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};   
int main(){
    
    
    return 0;
}