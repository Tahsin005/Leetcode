#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/?envType=daily-question&envId=2024-11-05

*/
class Solution {
public:
    int minChanges(string s) {
        int cnt = 0;
        for (int i = 0; i < s.length() - 1; i += 2) {
            if (s[i] != s[i + 1]) {
                cnt++;
            }
        }

        return cnt;
    }
};
int main(){


    return 0;
}