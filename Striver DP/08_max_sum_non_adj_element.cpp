#include <bits/stdc++.h> 
using namespace std;

int solution(int idx, vector<int> &arr, vector<int> &dp) {
    if (dp[idx] != -1) {
        return dp[idx];
    }

    if (idx == 0) return arr[idx];
    if (idx < 0) return 0;

    int pick = arr[idx] + solution(idx - 2, arr, dp);
    int notPick = 0 + solution(idx - 1, arr, dp);

    return dp[idx] = max(pick, notPick);
}
int solve(int n, vector<int> &arr) {
    vector<int> dp(n, -1);
    return solution(n - 1, arr, dp);
}
int maximumNonAdjacentSum(vector<int> &nums){
    // Write your code here.
    int n = nums.size();

    // return solve(n, nums);
    // vector<int> dp(n, 0);

    // dp[0] = nums[0];
    // int neg = 0;

    // for (int i = 1; i < n; i++) {
    //     int take = nums[i];
    //     if (i > 1) take += dp[i - 2];
    //     int notTake = 0 + dp[i - 1];

    //     dp[i] = max(take, notTake);
    // }

    // return dp[n - 1];

    int prev = nums[0];
    int prev2 = 0;

    for (int i = 1; i < n; i++) {
        int take = nums[i];
        if (i > 1) take += prev2;
        int notTake = 0 + prev;

        int curr = max(take, notTake);
        prev2 = prev;
        prev = curr;
    }

    return prev;
}
int main(){

}