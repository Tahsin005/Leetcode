#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/take-gifts-from-the-richest-pile/description/

*/
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        int n = gifts.size();

        for (int i = 0; i < k; i++) {
            int idx = 0;
            for (int j = 0; j < n; j++) {
                if (gifts[idx] < gifts[j]) {
                    idx = j;
                }
            }
            gifts[idx] = sqrt(gifts[idx]);
        }

        return accumulate(gifts.begin(), gifts.end(), 0LL);
    }

};
int main(){


    return 0;
}