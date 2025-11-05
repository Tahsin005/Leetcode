#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/remove-zeros-in-decimal-representation/description/

*/
class Solution {
public:
    long long removeZeros(long long n) {
        string num = to_string(n);
        string ans = "";

        for (int i = 0; i < num.length(); i++) {
            if (num[i] != '0') {
                ans.push_back(num[i]);
            }
        }

        return stoll(ans);
    }
};
int main() {


    return 0;
}