#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/array-of-doubled-pairs/description/

*/
class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        map<int, int> mp;

        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        for (int i = 0; i < arr.size(); i++) {
            if (mp[arr[i]] != 0 and mp[2 * arr[i]] != 0) {
                mp[arr[i]]--, mp[2 * arr[i]]--;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            if (mp[arr[i]] != 0) return false;
        }

        return true;
    }
};
int main() {


    return 0;
}