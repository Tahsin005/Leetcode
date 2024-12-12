#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/array-with-elements-not-equal-to-average-of-neighbors/description/
        
*/  
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1;

        vector<int> ans;
        while (i < j) {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++, j--;
        }
        if (nums.size() & 1) ans.push_back(nums[i]);

        return ans;
    }
};        
int main(){
    
    
    return 0;
}