#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/solving-questions-with-brainpower/description/?envType=daily-question&envId=2025-04-01

*/
class Solution {
    public:
        long long solve(int i, vector<vector<int>> &questions, vector<long long> &dp, int n) {
            if (i >= n) return 0;
            if (dp[i] != -1) return dp[i];

            long long korbo = questions[i][0] + solve(i + questions[i][1] + 1, questions, dp, n);
            long long korboNa = solve(i + 1, questions, dp, n);

            return dp[i] = max(korbo, korboNa);
        }
        long long mostPoints(vector<vector<int>>& questions) {
            int n = questions.size();

            vector<long long> dp(n, -1);
            return solve(0, questions, dp, n);
        }
};
int main() {


    return 0;
}