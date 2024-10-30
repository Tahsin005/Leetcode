#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/shuffle-string/

*/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();

        vector<pair<char, int>> v(n);

        for (int i = 0; i < n; i++) {
            pair<char, int> x = make_pair(indices[i], s[i]);
            v[i] = x;
        }

        sort(v.begin(), v.end(), [&](const pair<char, int> &a, const pair<char, int> &b) {
            return a.first < b.first;
        });

        string ans = "";
        for (auto [x, y]: v) {
            ans += char(y);
        }

        return ans;
    }
};
int main(){


    return 0;
}