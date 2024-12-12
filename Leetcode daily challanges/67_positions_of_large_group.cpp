#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/positions-of-large-groups/

*/
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.length();

        int cnt = 1;

        vector<vector<int>> ans;
        int i = 0;
        for (i = 0; i < n - 1; i++) {
            int j = i;
            while (s[j] == s[i + 1]) {
                i++;
            }

            if (i - j + 1 >= 3) {
                ans.push_back({j, i});
            }
        }

        return ans;
    }
};
int main(){


    return 0;
}