#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-cost-to-reach-every-position/

*/
class Solution {
    public:
        vector<int> minCosts(vector<int>& cost) {
            int prev = cost[0];
            for(int i = 1; i < cost.size(); i++) {
                if(cost[i] > prev) cost[i] = prev;
                else prev = cost[i];
            }

            return cost;
        }
};
int main() {


    return 0;
}