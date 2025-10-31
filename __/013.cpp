#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/neither-minimum-nor-maximum/description/

*/
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int ans = 0;
        int max1 = INT_MIN;
        int min1 = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            min1 = min(min1, nums[i]);
            max1 = max(max1, nums[i]);
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != min1 && nums[i] != max1) ans=nums[i];
        }
        
        if (ans == 0) return -1;
        return ans;
    }
};
int main() {


    return 0;
}