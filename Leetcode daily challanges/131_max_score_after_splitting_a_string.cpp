#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-score-after-splitting-a-string/?envType=daily-question&envId=2025-01-01

*/
class Solution {
public:
    int maxScore(string s) {
        int n = s.length();

        vector<int> zeros(n), ones(n);

        int cnt0 = 0, cnt1 = 0;

        for (int i = 0; i < n; i++) {
            cnt0 += (s[i] == '0');
            zeros[i] = cnt0;
        }

        for (int i = n - 1; i > -1; i--) {
            cnt1 += (s[i] == '1');
            ones[i] = cnt1;
        }

        int cnt = 0;

        for (int i = 0; i < n - 1; i++) {
            cnt = max(cnt, zeros[i] + ones[i + 1]);
        }

        return cnt;
    }
};
int main(){


    return 0;
}