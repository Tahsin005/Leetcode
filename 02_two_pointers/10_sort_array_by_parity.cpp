#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/sort-array-by-parity/
        
*/          
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            if (nums[left] % 2 > nums[right] % 2) {
                swap(nums[left], nums[right]);
            }

            if (nums[left] % 2 == 0) left++;
            if (nums[right] % 2 == 1) right--;
        }

        return nums;
    }
};
int main(){
    
    
    return 0;
}