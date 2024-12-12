#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/excel-sheet-column-number/

*/
class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;

        map<char, int> mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]] = s[i] - 'A' + 1;
        }

        int expo = 1;
        for (int i = 0; i < s.length(); i++) {
            ans += (mp[s[i]] * pow(26, s.length() - expo));
            expo++;
        }

        return ans;
    }
};
int main(){


    return 0;
}