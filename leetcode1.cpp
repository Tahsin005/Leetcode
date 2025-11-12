#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int indexMap[304] = {0}; 
        int count[101] = {0}; 
        int res = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
            int idx = nums[i] * 3 + (count[nums[i]] % 3);
            indexMap[idx] = i;

            if (count[nums[i]] >= 3) {
                int base = nums[i] * 3;
                int a = indexMap[base];
                int b = indexMap[base + 1];
                int c = indexMap[base + 2];

                int totalDist = abs(a - b) + abs(b - c) + abs(a - c);
                res = min(res, totalDist);
            }
        }

        return (res == INT_MAX) ? -1 : res;
    }
};

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
}