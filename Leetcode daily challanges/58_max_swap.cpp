#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/maximum-swap/

*/
class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);

        int mx = num, n = s.length();
        if (n == 1) return num;

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                string temp = s;
                swap(temp[i], temp[j]);
                int tempInInt = stoi(temp);
                mx = max(mx, tempInInt);
            }
        }

        return mx;
    }
};
int main(){


    return 0;
}