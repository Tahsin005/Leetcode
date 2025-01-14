#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/?envType=daily-question&envId=2025-01-14

*/
class Solution {
public:
    int returnCountOfCommonTillNow(map<int, pair<bool, bool>> &mp) {
        int cnt = 0;
        for (auto [x, y] : mp) {
            pair<bool, bool> candid = y;
            if (candid.first and candid.second) {
                cnt++;
            }
        }

        return cnt;
    }
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n);

        map<int, pair<bool, bool>> mp;
        for (int i = 0; i < n; i++) {
            mp[A[i]].first = true;
            mp[B[i]].second = true;
            ans[i] = returnCountOfCommonTillNow(mp);
        }

        return ans;
    }
};
int main() {


    return 0;
}