#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/description/?envType=daily-question&envId=2024-11-19

*/
class Solution {
public:
    long long maximumSubarraySum(std::vector<int>& nums, int k) {
        unordered_set<int> hs;
        int start = 0, end = 0;
        long long maxSum = 0, currentSum = 0;

        while (end < nums.size()) {
            int temp = nums[end];

            while (hs.find(temp) != hs.end()) {
                hs.erase(nums[start]);
                currentSum -= nums[start];
                start++;
            }

            currentSum += temp;

            if ((end - start + 1) == k) {
                maxSum = max(maxSum, currentSum);
                currentSum -= nums[start];
                hs.erase(nums[start]);
                start++;
            }

            hs.insert(temp);
            end++;
        }

        return maxSum;
    }
};
int main(){


    return 0;
}