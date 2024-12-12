#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/min-cost-climbing-stairs/
        
*/          
class Solution {
public:
    vector<int> dp;

    int minCost(vector<int>& cost, int n) {
        if (n < 0) return 0;
        if (n == 0 || n == 1) return cost[n];
        if (dp[n] != -1) return dp[n];
        dp[n] = cost[n] + min(minCost(cost, n - 1), minCost(cost, n - 2));
        return dp[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        dp.resize(n, -1);
        return min(minCost(cost, n - 1), minCost(cost, n - 2));
    }
};
int main(){
    
    
    return 0;
}