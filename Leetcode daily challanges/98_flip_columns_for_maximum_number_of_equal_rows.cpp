#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/flip-columns-for-maximum-number-of-equal-rows/description/?envType=daily-question&envId=2024-11-22

*/
class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        unordered_map<string, int> count;

        for (int i = 0; i < m; i++) {
            matrix[i].push_back(2);

            string segment = "*";
            string pattern = "";

            for (int j = 1; j <= n; j++) {
                if (matrix[i][j] == matrix[i][j - 1]) {
                    segment += "*";
                } else {
                    pattern += segment;
                    pattern += "|";
                    segment = "*";
                }
            }

            count[pattern]++;
        }


        int mx = 0;
        for (auto [x, y]: count) {
            mx = max(mx, y);
        }

        return mx;
    }
};
int main(){


    return 0;
}