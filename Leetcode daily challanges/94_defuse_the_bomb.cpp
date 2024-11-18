#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/defuse-the-bomb/description/?envType=daily-question&envId=2024-11-18

*/
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            if (k > 0) {
                int tempIdx = i;
                int tempK = k;
                int sumRight = 0;
                while (tempK--) {
                    if (tempIdx == n) {
                        tempIdx = 0;
                    }
                    sumRight += code[tempIdx];
                    tempIdx++;
                }

                ans[i] = sumRight;
            } else if (k < 0) {
                int tempIdx = i;
                int tempK = abs(k);
                int sumLeft = 0;
                while (tempK--) {
                    if (tempIdx == - 1) {
                        tempIdx = n - 1;
                    }
                    sumLeft += code[tempIdx];
                    tempIdx--;
                }

                ans[i] = sumLeft;
            } else {
                ans[i] = 0;
            }
        }

        vector<int> result;
        if (k < 0) {
            result.push_back(ans[n - 1]);

            for (int i = 0; i < n - 1; i++) {
                result.push_back(ans[i]);
            }
        } else {
            for (int i = 1; i < n; i++) {
                result.push_back(ans[i]);
            }

            result.push_back(ans[0]);
        }

        return result;
    }
};
int main(){


    return 0;
}