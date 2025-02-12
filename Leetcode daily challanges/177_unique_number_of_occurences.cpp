#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/unique-number-of-occurrences/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            map<int, int> mp;

            for (int val : arr) mp[val]++;

            vector<int> v;

            for (auto [x, y] : mp) {
                v.push_back(y);
            }

            sort(v.begin(), v.end());

            for (int i = 0; i < v.size() - 1; i++) {
                if (v[i] == v[i + 1]) return false;
            }

            return true;
        }
};
int main() {


    return 0;
}