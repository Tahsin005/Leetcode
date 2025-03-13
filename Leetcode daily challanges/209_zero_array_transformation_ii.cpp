#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/zero-array-transformation-ii/description/?envType=daily-question&envId=2025-03-13

*/
class Solution {
    public:
        bool canFormZeroArray(vector<int>& nums, vector<vector<int>>& queries, int k) {
            int n = nums.size(), sum = 0;
            vector<int> differenceArray(n + 1);
    
            for (int i = 0; i < k; i++) {
                int start = queries[i][0], end = queries[i][1], val = queries[i][2];
    
                differenceArray[start] += val;
                differenceArray[end + 1] -= val;
            }
    
            for (int i = 0; i < n; i++) {
                sum += differenceArray[i];
                if (sum < nums[i]) return false;
            }
    
            return true;
        }
        int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            int n = nums.size(), left = 0, right = queries.size();
    
            if (!canFormZeroArray(nums, queries, right)) return -1;
    
            while (left <= right) {
                int middle = left + (right - left) / 2;
                if (canFormZeroArray(nums, queries, middle)) {
                    right = middle - 1;
                } else {
                    left = middle + 1;
                }
            }
    
            return left;
        }
};
int main() {


    return 0;
}