#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/string-compression/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if(n < 2){
            return n;
        }

        vector<char> ans;
        int i = 0, j = i;

        while (i < n) {
            while (j < n and chars[i] == chars[j]) {
                j++;
            }
            ans.push_back(chars[i]);
            int len = j - i;
            if (len > 1) {
                string num = to_string(len);
                for (char c : num) {
                    ans.push_back(c);
                }
            }
            i = j;
        }

        chars = ans;

        return ans.size();
    }
};
int main() {


    return 0;
}


// resume ready
// portfolio ready, whatsapp number add ..
// problem solving (2 * easy * mid * hard)
// 20 job apply
// networking
