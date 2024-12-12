#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
        
*/  
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1 = s.length(), n2 = p.length();
        if (n2 > n1) return {};

        vector<int> ans;
        vector<int> countP(26, 0), countS(26, 0);

        for (char c : p) {
            countP[c - 'a']++;
        }

        for (int i = 0; i < n2; i++) {
            countS[s[i] - 'a']++;
        }

        for (int i = 0; i <= n1 - n2; i++) {
            if (i > 0) {
                countS[s[i - 1] - 'a']--;
                countS[s[i + n2 - 1] - 'a']++;
            }
            if (countS == countP) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};

int main(){
    
    
    return 0;
}