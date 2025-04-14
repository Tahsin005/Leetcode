#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-good-triplets/description/?envType=daily-question&envId=2025-04-14

*/
class Solution {
    public:
        int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
            int cnt = 0;
            for (int i = 0; i < arr.size() - 2; i++) {
                for (int j = i + 1; j < arr.size() - 1; j++) {
                    for (int k = j + 1; k < arr.size(); k++) {
                        if (abs(arr[i] - arr[j]) <= a and abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c) {
                            cnt++;
                        }
                    }
                }
            }
            return cnt;
        }
};
int main() {


    return 0;
}