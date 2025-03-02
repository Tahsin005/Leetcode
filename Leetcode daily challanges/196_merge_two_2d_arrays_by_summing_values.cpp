#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/?envType=daily-question&envId=2025-03-02

*/
class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            map<int, int> keyToSum;
    
            for (auto nums : nums1) {
                keyToSum[nums[0]] = nums[1];
            }
    
            for (auto nums : nums2) {
                keyToSum[nums[0]] += nums[1];
            }
    
            vector<vector<int>> mergedArray;
            for (auto [x, y] : keyToSum) {
                mergedArray.push_back({x, y});
            }
    
            return mergedArray;
        }
};
int main() {


    return 0;
}