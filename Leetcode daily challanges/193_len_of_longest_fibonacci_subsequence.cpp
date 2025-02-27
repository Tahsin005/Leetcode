#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/length-of-longest-fibonacci-subsequence/description/?envType=daily-question&envId=2025-02-27

*/
class Solution {
    public:
        int lenLongestFibSubseq(vector<int>& arr) {
            int n = arr.size();
            unordered_set<int> numSet(arr.begin(), arr.end());

            int len = 0;
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    int prev = arr[j];
                    int curr = arr[i] + arr[j];

                    int currLen = 2;
                    while (numSet.find(curr) != numSet.end()) {
                        int tmp = curr;
                        curr += prev;
                        prev = tmp;
                        currLen++;
                        len = max(len, currLen);
                    }
                }
            }

            return len;
        }
};
int main() {


    return 0;
}