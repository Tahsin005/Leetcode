#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/move-zeroes/description/
        
*/  
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count_of_zeros = count(nums.begin(), nums.end(), 0);
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[idx] = nums[i];
                idx++;
            }
        }
        for (int i = idx; i < nums.size(); i++) {
            nums[i] = 0;
        }

    }
};        
int main(){
    
    
    return 0;
}