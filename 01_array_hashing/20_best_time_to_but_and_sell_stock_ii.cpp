#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
        
*/  
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit = 0;
        for (int i = 0; i < n - 1; i++) {
            if (prices[i] < prices[i + 1]) {
                profit += (prices[i + 1] - prices[i]);
            }
        }

        return profit;
    }
};
int main(){
    
    
    return 0;
}