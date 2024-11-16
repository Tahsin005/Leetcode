#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/find-the-power-of-k-size-subarrays-i/description/?envType=daily-question&envId=2024-11-16

*/
class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> ans(n - k + 1);

        for (int i = 0; i <= n - k; i++) {
            bool isCons = true;

            for (int j = i; j < i + k - 1; j++) {
                if (nums[j + 1] != nums[j] + 1) {
                    isCons = false;
                    break;
                }
            }

            if (isCons) {
                ans[i] = nums[i + k - 1];
            } else {
                ans[i] = -1;
            }
        }

        return ans;
    }
};
int main(){


    return 0;
}