#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/?envType=daily-question&envId=2024-11-15

*/
class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n = arr.size();

        int left = 0;
        while (left + 1 < n and arr[left] <= arr[left + 1]) {
            left++;
        }

        if (left == n - 1)  {
            return 0;
        }

        int right = n - 1;
        while (right > left and arr[right - 1] <= arr[right]) {
            right--;
        }

        int remove = min(n - left - 1, right);

        int i = 0, j = right;
        while (i <= left and j < n) {
            if (arr[i] <= arr[j]) {
                remove = min(remove, j - i - 1);
                i++;
            } else {
                j++;
            }
        }

        return remove;
    }
};

int main(){


    return 0;
}