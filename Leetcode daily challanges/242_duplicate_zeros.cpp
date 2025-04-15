#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/duplicate-zeros/description/

*/
class Solution {
    public:
        void duplicateZeros(vector<int>& arr) {
            int n = arr.size();
            for (int i = 0; i < n; i++) {
                if (arr[i] == 0) {
                    for (int j = n - 1; j > i; j--) {
                        arr[j] = arr[j - 1];
                    }
                    i++;
                }
            }
        }
};
int main() {


    return 0;
}