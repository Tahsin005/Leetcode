#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/partition-array-according-to-given-pivot/description/?envType=daily-question&envId=2025-03-03

*/
class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> ans;
    
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] < pivot) ans.push_back(nums[i]);
            }
    
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == pivot) ans.push_back(nums[i]);
            }
    
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] > pivot) ans.push_back(nums[i]);
            }
    
            return ans;
        }
};
int main() {


    return 0;
}