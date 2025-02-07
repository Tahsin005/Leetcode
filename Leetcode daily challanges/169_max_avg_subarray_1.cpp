#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg = -10001, currSum = 0;

        int i = 0, j = 0, n = nums.size();

        while (j < n) {
            currSum += nums[j];

            if (j - i + 1 == k) {
                double average = currSum / k;
                avg = max(avg, average);
                currSum -= nums[i];
                i++;
            }
            j++;
        }

        return avg;
    }
};
int main() {


    return 0;
}