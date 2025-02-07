#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/max-number-of-k-sum-pairs/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0, r = n - 1, cnt = 0;

        sort(nums.begin(), nums.end());

        while (l < r) {
            int currSum = nums[l] + nums[r];
            if (currSum == k) {
                cnt++, l++, r--;
            } else if (currSum > k) {
                r--;
            } else {
                l++;
            }
        }

        return cnt;
    }
};
int main() {


    return 0;
}