#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/license-key-formatting/

*/
class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int n = s.length(), cnt = 0;

        string ans = "";

        for (int i = n - 1; i > -1; i--) {
            if (s[i] == '-') continue;
            if (cnt > 0 and cnt % k == 0) {
                ans += '-';
            }
            ans += toupper(s[i]);
            cnt++;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main(){


    return 0;
}