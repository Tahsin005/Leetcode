#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/

*/
class Solution {
public:
    char findKthBit(int n, int k) {
        string ans = "0";

        for (int i = 1; i < n and ans.length() < k; i++) {
            ans += '1';

            string temp = ans;
            for(int j = temp.length() - 2; j > -1; j--) {
                char bit = (temp[j] == '1')? '0' : '1';
                ans += bit;
            }
        }

        return ans[k - 1];
    }
};
int main(){


    return 0;
}