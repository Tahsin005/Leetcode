#include <bits/stdc++.h>
using namespace std;

// Memoization
// int solveUtil(int ind, vector<int>& height, vector<int>& dp, int k) {
//     if (ind == 0) return 0;
//     if (dp[ind] != -1) return dp[ind];
    
//     int mmSteps = INT_MAX;
    
//     for (int j = 1; j <= k; j++) {
//         if (ind - j >= 0) {
//             int jump = solveUtil(ind - j, height, dp, k) + abs(height[ind] - height[ind - j]);
//             mmSteps = min(jump, mmSteps);
//         }
//     }
    
//     return dp[ind] = mmSteps;
// }

// Tabulation
int solveUtil(int n, vector<int>& height, vector<int>& dp, int k) {
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        int mmSteps = INT_MAX;

        for (int j = 1; j <= k; j++) {
            if (i - j >= 0) {
                int jump = dp[i - j] + abs(height[i] - height[i - j]);
                mmSteps = min(jump, mmSteps);
            }
        }
        dp[i] = mmSteps;
    }
    return dp[n - 1]; 
}

int solve(int n, vector<int>& height, int k) {
    vector<int> dp(n, -1); 
    return solveUtil(n, height, dp, k);
}


/*

    https://atcoder.jp/contests/dp/tasks/dp_b
*/

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> height(n);
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }
    vector<int> dp(n, -1); 
    cout << solve(n, height, k) << endl;
    return 0;
}

