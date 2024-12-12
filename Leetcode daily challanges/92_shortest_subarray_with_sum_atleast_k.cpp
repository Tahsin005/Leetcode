#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/shortest-subarray-with-sum-at-least-k/description/?envType=daily-question&envId=2024-11-17

*/
class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long> prefixSum(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        deque<int> dq;
        int minLength = INT_MAX;

        for (int i = 0; i <= n; i++) {
            while (!dq.empty() and prefixSum[i] - prefixSum[dq.front()] >= k) {
                minLength = min(minLength, i - dq.front());
                dq.pop_front();
            }

            while (!dq.empty() and prefixSum[i] <= prefixSum[dq.back()]) {
                dq.pop_back();
            }

            dq.push_back(i);
        }

        return (minLength == INT_MAX) ? -1 : minLength;
    }
};
int main(){


    return 0;
}