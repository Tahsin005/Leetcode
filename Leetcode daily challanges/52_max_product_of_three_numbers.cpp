#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/maximum-product-of-three-numbers/
        
*/          
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int withNegative = nums[0] * nums[1] * nums[n - 1];
        int withoutNegative = nums[n - 3] * nums[n - 2] * nums[n - 1];

        return max(withNegative, withoutNegative);
    }
};
int main(){
    
    
    return 0;
}