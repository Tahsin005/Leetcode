#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/?envType=daily-question&envId=2025-02-13

*/
class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            priority_queue<long, vector<long>, greater<long>> min_heap(nums.begin(), nums.end());
            int cnt = 0;
    
            while (min_heap.top() < k) {
                long x = min_heap.top();
                min_heap.pop();
                long y = min_heap.top();
                min_heap.pop();
                min_heap.push(min(x, y) * 2 + max(x, y));
    
                cnt++;
            }
            return cnt;
        }
};
int main() {


    return 0;
}