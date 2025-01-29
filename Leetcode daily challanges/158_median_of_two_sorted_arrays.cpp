#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/median-of-two-sorted-arrays/description/

*/
class Solution {
public:
    int p1 = 0, p2 = 0;

    int getMin(vector<int>& nums1, vector<int>& nums2) {
        if (p1 < nums1.size() && p2 < nums2.size()) {
            return nums1[p1] < nums2[p2] ? nums1[p1++] : nums2[p2++];
        } else if (p1 < nums1.size()) {
            return nums1[p1++];
        } else if (p2 < nums2.size()) {
            return nums2[p2++];
        }
        return -1;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = int(nums1.size()), n = int(nums2.size());

        if ((m + n) % 2 == 0) {
            for (int i = 0; i < (m + n) / 2 - 1; i++) {
                int _ = getMin(nums1, nums2);
            }
            return (double)(getMin(nums1, nums2) + getMin(nums1, nums2)) / 2;
        } else {
            for (int i = 0; i < (m + n) / 2; i++) {
                int _ = getMin(nums1, nums2);
            }
            return getMin(nums1, nums2);
        }

        return -1;
    }
};
int main() {


    return 0;
}