#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/minimized-maximum-of-products-distributed-to-any-store/?envType=daily-question&envId=2024-11-14

*/
class Solution {
public:
    bool isPossible(int n, vector<int> &quantities, int mid) {
        int cnt = 0;

        for (int i = 0; i < quantities.size(); i++) {
            cnt += quantities[i] / mid;

            if (quantities[i] % mid) {
                cnt++;
            }
            if (cnt > n) return 0;
        }

        return true;
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        int s = 1, e = 1e5, ans = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (isPossible(n, quantities, mid)) {
                ans = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return ans;
    }
};
int main(){


    return 0;
}