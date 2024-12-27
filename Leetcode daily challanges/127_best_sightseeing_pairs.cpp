#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/best-sightseeing-pair/description/?envType=daily-question&envId=2024-12-27

*/
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans = 0;
        int prev = values[0];

        for (int j = 1; j < values.size(); j++) {
            ans = max(ans, prev + values[j] - j);
            prev = max(prev, values[j] + j);
        }

        return ans;
    }
};
int main(){


    return 0;
}