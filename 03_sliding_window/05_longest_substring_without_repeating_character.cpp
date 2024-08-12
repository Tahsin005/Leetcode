#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
        
*/          
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0, l = 0, r = 0, n = s.length();
        map<char, int> hash;
        while (r < n) {
            if (hash.find(s[r]) == hash.end() or hash[s[r]] < l) {
                len = max(len, r - l + 1);
            } else {
                l = hash[s[r]] + 1;
            }
            hash[s[r]] = r;
            r++;
        }
        for (auto [x, y] : hash) {
            cout << x << " " << y << endl;
        }

        return len;
    }
};
int main(){
    
    
    return 0;
}