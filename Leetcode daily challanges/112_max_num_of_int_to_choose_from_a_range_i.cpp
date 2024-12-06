#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/maximum-number-of-integers-to-choose-from-a-range-i/?envType=daily-question&envId=2024-12-06

*/
class Solution {
public:
    bool customBinarySearch(vector<int>& arr, int target) {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) return true;

            if (arr[mid] > target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return false;
    }
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(), banned.end());

        int cnt = 0;

        for (int num = 1; num <= n; num++) {
            if (customBinarySearch(banned, num)) continue;

            maxSum -= num;

            if (maxSum < 0) break;

            cnt++;
        }
        return cnt;
    }
};
int main(){


    return 0;
}