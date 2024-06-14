#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/product-of-array-except-self/description/
        
*/  
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        if (n == 2) {
            swap(nums[0], nums[1]);
            return nums;
        }
        vector<int> prefix(n), suffix(n), ans(n, 0);

        prefix[0] = nums[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] *  nums[i];
        }

        suffix[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; --i) {
            suffix[i] = nums[i] * suffix[i + 1];
        }

        ans[0] = suffix[1];
        ans[n - 1] = prefix[n - 2];

        for (int i = 1; i < n - 1; i++) {
            ans[i] = prefix[i - 1] * suffix[i + 1];
        }
        return ans;
    }
};        
int main(){
    
    
    return 0;
}