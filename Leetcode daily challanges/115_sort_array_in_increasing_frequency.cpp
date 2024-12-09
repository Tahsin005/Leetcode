#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/sort-array-by-increasing-frequency/?envType=daily-question&envId=2024-12-09

*/
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }

        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] == freq[b]) {
                return a > b;
            }

            return freq[a] < freq[b];
        });

        return nums;
    }
};
int main(){


    return 0;
}