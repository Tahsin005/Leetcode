#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/description/?envType=daily-question&envId=2025-10-23

*/
class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.size() > 2) {
            string t;
            for (size_t i = 0; i + 1 < s.size(); i++) {
                t += ((s[i] - '0' + s[i + 1] - '0') % 10) + '0';
            }
            s = t;
        }
        return s[0] == s[1];
    }
};
int main() {


    return 0;
}