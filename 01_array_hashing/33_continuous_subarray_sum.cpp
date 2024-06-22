#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/continuous-subarray-sum/description/
        
*/  
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        map<int, int> mp;
        mp[0] = -1;

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (mp.find(sum % k) != mp.end()) {
                int len = i - mp[sum % k];
                if (len >= 2) {
                    return true;
                }
            } else {
                mp[sum % k] = i;
            }
        }
        return false;
    }
};        
int main(){
    
    
    return 0;
}