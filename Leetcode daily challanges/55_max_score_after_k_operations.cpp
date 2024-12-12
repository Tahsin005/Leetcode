#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/maximal-score-after-applying-k-operations/
        
*/          
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int, vector<int>> pq;

        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        long long int sum = 0;

        for (int i = 0; i < k; i++) {
            int value = pq.top();
            pq.pop();
            sum += value * 1LL;
            int valueToPlace = (value / 3) + (value % 3 != 0);
            pq.push(valueToPlace);
        }

        return sum;
    }
};
int main(){
    
    
    return 0;
}