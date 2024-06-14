#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/remove-element/description/
        
*/          
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                nums[cnt] = nums[i];
                cnt++;
            }
        }
        for (int i = cnt + 1; i < nums.size(); i++) {
            nums[i] = -1;
        }

        return cnt;
    }
};
int main(){
    
    
    return 0;
}