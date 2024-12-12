#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/4sum/
        
*/          
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    if (sum < target) {
                        k++;
                    } else if (sum > target) {
                        l--;
                    } else {
                        vector<int> temp = {
                            nums[i], nums[j], nums[k], nums[l]
                        };

                        if (find (ans.begin(), ans.end(), temp) == ans.end()) {
                            ans.push_back(temp);
                        }
                        k++, l--;
                    }
                }
            }
        }

        return ans;
    }
};
int main(){
    
    
    return 0;
}