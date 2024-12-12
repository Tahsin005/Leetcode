#include <bits/stdc++.h>
using namespace std;
/*
    https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
*/
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n = s.length(), l = 0, r = 0, maxlen = -1;
        
        map<char, int> mp;
        
        while (r < n) {
            mp[s[r]]++;
            
            if (mp.size() > k) {
                mp[s[l]]--;
                if (mp[s[l]] == 0) {
                    mp.erase(s[l]);
                }
                l++;
            }
            if (mp.size() == k) {
                maxlen = max(maxlen, r - l + 1);
            }
            
            r++;
        }
        
        return maxlen;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}