#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/apply-operations-to-an-array/description/?envType=daily-question&envId=2025-03-01

*/
class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            for (int i = 0; i < nums.size() - 1; i++) {
                if (nums[i] == nums[i + 1]) {
                    nums[i] *= 2;
                    nums[i + 1] = 0;
                }
            }
    
            int nonZeroIdx = 0;
    
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != 0) {
                    nums[nonZeroIdx] = nums[i];
                    nonZeroIdx++;
                }
            }
    
            while (nonZeroIdx < nums.size()) {
                nums[nonZeroIdx] = 0;
                nonZeroIdx++;
            }
    
            return nums;
        }
};
int main() {


    return 0;
}