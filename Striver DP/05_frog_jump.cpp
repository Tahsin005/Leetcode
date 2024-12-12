#include <bits/stdc++.h>
using namespace std;
int solve(int ind, vector<int> &height, vector<int> &dp) {

    if (ind == 0) return 0;
    if (dp[ind] != -1) return dp[ind];
    int jumpTwo = INT_MAX;
    int jumpOne = solve(ind - 1, height, dp) + abs(height[ind] - height[ind - 1]);
    if (ind > 1) jumpTwo = solve(ind - 2, height, dp) + abs(height[ind] - height[ind - 2]);

    return dp[ind] = min(jumpOne, jumpTwo);
}
int frogJump(int n, vector<int> &heights) {
    // Memoization
    vector<int> dp(n, -1);
    return solve(n - 1, heights, dp);


    // Tabulation
    vector<int> dp(n, 0);
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        int jumpOne = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int jumpTwo = INT_MAX;
        if (i > 1) {
            jumpTwo = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        }
        dp[i] = min(jumpOne, jumpTwo);
    }

    return dp[n - 1];


    // Tabulation - space optimized
    int prev = 0;
    int prev2 = 0;

    for (int i = 1; i < n; i++) {
        int jumpOne = prev + abs(heights[i] - heights[i - 1]);
        int jumpTwo = INT_MAX;
        if (i > 1) {
            jumpTwo = prev2 + abs(heights[i] - heights[i - 2]);
        }
        int curri = min(jumpOne, jumpTwo);
        
        prev2 = prev;
        prev = curri;
    }

    return prev;
}

/*
    https://www.naukri.com/code360/problems/frog-jump_3621012
*/