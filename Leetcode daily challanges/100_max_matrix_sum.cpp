#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/maximum-matrix-sum/?envType=daily-question&envId=2024-11-24

*/
class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();

        int minAbsVal = INT_MAX, cntNeg = 0;
        int64_t sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                sum += abs(matrix[i][j]) * 1LL;
                if (matrix[i][j] < 0) {
                    cntNeg++;
                }
                minAbsVal = min(minAbsVal, abs(matrix[i][j]));
            }
        }
        if (cntNeg & 1) return sum - (2 * minAbsVal);
        return sum;
    }
};
int main(){


    return 0;
}