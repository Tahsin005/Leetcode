#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/max-consecutive-ones-iii/description/
        
*/  
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero = 0, maxlen = 0, l = 0, r = 0, n = nums.size();

        while (r < n) {
            zero += (nums[r] == 0);
            if (zero > k) {
                zero -= (nums[l] == 0);
                l++;
            }
            // while (zero > k) {
            //     zero -= (nums[l] == 0);
            //     l++;
            // }

            if (zero <= k) {
                int len = r - l + 1;
                maxlen = max(maxlen, len);
            }
            r++;
        }

        return maxlen;
    }
};        
int main(){
    
    
    return 0;
}