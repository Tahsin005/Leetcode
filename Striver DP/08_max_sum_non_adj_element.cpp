#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://www.naukri.com/code360/problems/maximum-sum-of-non-adjacent-elements_843261?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
        
*/          
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

    return solve(n, nums);
}
int main(){
    
    
    return 0;
}