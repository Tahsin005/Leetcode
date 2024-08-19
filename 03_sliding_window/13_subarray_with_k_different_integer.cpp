#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/subarrays-with-k-different-integers/
        
*/  
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size(), l = 0, r = 0, less = 0, equal = 0;

        map<int, int> hash;

        while (r < n) {
            hash[nums[r]]++;
            while (hash.size() > k) {
                hash[nums[l]]--;
                if (hash[nums[l]] == 0) {
                    hash.erase(nums[l]);
                }
                l++;
            }
            equal += (r - l + 1);
            r++;
        }

        l = 0, r = 0, less = 0;
        hash.clear();
        while (r < n) {
            hash[nums[r]]++;
            while (hash.size() > k - 1) {
                hash[nums[l]]--;
                if (hash[nums[l]] == 0) {
                    hash.erase(nums[l]);
                }
                l++;
            }
            less += (r - l + 1);
            r++;
        }


        return equal - less;
    }
};        
int main(){
    
    
    return 0;
}