#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
        
*/          
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for (auto x: nums) {
            mp[x]++;
        }
        nums.clear();
        for (auto [x, y]: mp) {
            if (y >= 2) {
                nums.push_back(x);
                nums.push_back(x);
            } else if (y == 1) {
                nums.push_back(x);
            }
        }

        return nums.size();
    }
};
int main(){
    
    
    return 0;
}