#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/subarray-sum-equals-k/description/
        
*/      
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i = 0, sum = 0, n = nums.size();
        int cnt = 0;

        map<int, int> mp;
        mp[sum] = 1;
        while (i < n) {
            sum += nums[i];

            int remaining = sum - k;
            if (mp.find(remaining) != mp.end()) {
                cnt += mp[remaining];
            }
            mp[sum]++;
            i++;
        }

        return cnt;
    }
};    
int main(){
    
    
    return 0;
}