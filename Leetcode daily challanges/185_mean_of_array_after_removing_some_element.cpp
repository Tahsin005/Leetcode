#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/defanging-an-ip-address/description/

*/
class Solution {
    public:
        double trimMean(vector<int>& arr) {
            int n = arr.size();
            int a = (int)(5.0 / 100 * n);

            sort(arr.begin(), arr.end());

            double sum = 0;
            int cnt = 0;
            for (int i = a; i < n - a; i++) {
                sum += arr[i];
                cnt++;
            }

            return sum / cnt;
        }
};
int main() {


    return 0;
}