#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/sum-of-elements-with-frequency-divisible-by-k/description/

*/
class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        vector<int> arr(101, 0);
        for (const int& i : nums) {
            arr[i]++;
        }
        int sum = 0;
        for (int i = 1; i < 101; i++) {
            if (arr[i] % k == 0) sum += (arr[i] * i);
        }
        return sum;
    }
};
int main() {


    return 0;
}