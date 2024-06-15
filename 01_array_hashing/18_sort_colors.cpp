#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/sort-colors/
        
*/  
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int min_index = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] < nums[min_index]) {
                    min_index = j;
                }
            }

            swap(nums[i], nums[min_index]);
        }
    }
};        
int main(){
    
    
    return 0;
}