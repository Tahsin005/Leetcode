#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/lexicographically-smallest-string-after-reverse/description/

*/
class Solution {
public:
    string lexSmallest(string s) {
        int n = s.size();
        string ans = s;
        for (int k = 1; k <= n; k++) {
            string revstart = s;
            string revback = s;
            reverse(revstart.begin(), revstart.begin() + k);
            reverse(revback.begin() + n - k, revback.end());
            ans = min(ans, revstart);
            ans = min(ans, revback);
        }

        return ans;
    }
};
int main() {


    return 0;
}