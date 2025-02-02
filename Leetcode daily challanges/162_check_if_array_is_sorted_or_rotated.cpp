#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/?envType=daily-question&envId=2025-02-02

*/
class Solution {
public:
    bool check(vector<int>& nums) {
        if (nums.size() == 1) {
            return true;
        }

        int i = 0;
        while (i < nums.size() - 1 and nums[i + 1] >= nums[i]) {
            i++;
        }
        if (i == nums.size() - 1) {
            return true;
        }

        i++;
        while (i < nums.size() - 1 and nums[i + 1] >= nums[i] && nums[i] <= nums[0]) {
            i++;
        }

        if (i == nums.size() - 1 && nums[i] <= nums[0]) {
            return true;
        }
        
        return false;
    }
};
int main() {


    return 0;
}