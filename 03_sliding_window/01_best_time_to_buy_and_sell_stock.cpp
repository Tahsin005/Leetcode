#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
        
*/  
class Solution {
public:
    vector<int> suffixMax(const vector<int>& nums) {
        int n = nums.size();
        vector<int> suffix_max(n);

        suffix_max[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; --i) {
            suffix_max[i] = max(nums[i], suffix_max[i + 1]);
        }

        return suffix_max;
    }
    int maxProfit(vector<int>& prices) {
        vector<int> suffix_max = suffixMax(prices);

        for (auto val: suffix_max) {
            cout << val << " ";
        }

        int n = prices.size(), ans = 0;

        for (int i = 0; i < n - 1; i++) {
            if (prices[i] <= suffix_max[i + 1]) {
                ans = max(ans, abs(prices[i] - suffix_max[i + 1]));
            }
        }

        return ans;
    }   
};        
int main(){
    
    
    return 0;
}