#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
        
*/     
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.length();

        map<char, int> mp;
        int cnt = 0;
        int r = 0;

        while (r < n) {
            mp[s[r]] = r;
            if (mp.find('a') != mp.end() and mp.find('b') != mp.end() and mp.find('c') != mp.end()) {
                cnt++;
                cnt += min({mp['a'], mp['b'], mp['c']});
            }
            r++;
        }

        return cnt;
    }
};     
int main(){
    
    
    return 0;
}