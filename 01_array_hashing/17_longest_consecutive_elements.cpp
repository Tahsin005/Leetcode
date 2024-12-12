#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/longest-consecutive-sequence/
        
*/  
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]] = 1;
        }

        for (int i = 0; i < n; i++) {
            if (mp.count(nums[i] - 1) > 0) {
                mp[nums[i]] = 0;
            }
        }

        int MAX = 0;
        for (int i = 0; i < n; i++) {
            if (mp[nums[i]] == 1) {
                int j = 0, cnt = 0;
                while (mp.count(nums[i] + j) > 0) {
                    j++, cnt++;
                }
                MAX = max(MAX, cnt);
            }
        }

        return MAX;
    }
};        
int main(){
    
    
    return 0;
}