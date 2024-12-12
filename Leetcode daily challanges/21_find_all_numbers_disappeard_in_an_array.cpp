#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
        
*/          
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> freq(nums.size() + 1, -1);

        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]] = 1;
        }

        vector<int> ans;
        for (int i = 1; i <= nums.size(); i++) {
            if (freq[i] == -1)  {
                ans.push_back(i);
            }
        }

        return ans;
    }
};
int main(){
    
    
    return 0;
}