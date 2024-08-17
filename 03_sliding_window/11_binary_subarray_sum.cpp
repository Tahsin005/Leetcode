#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/binary-subarrays-with-sum/description/
        
*/  
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size(), l = 0, r = 0, cnt = 0, sum = 0, less = 0;

        while (r < n) {
            sum += nums[r];
            while (l <= r and sum > goal) {
                sum -= nums[l];
                l++;
            }
            less += (r - l + 1);
            r++;
        }
        l = 0, r = 0, cnt = 0, sum = 0;
        while (r < n) {
            sum += nums[r];
            while (l <= r and sum > goal - 1) {
                sum -= nums[l];
                l++;
            }
            cnt += (r - l + 1);
            r++;
        }

        return less - cnt;
    }
};        
int main(){
    
    
    return 0;
}