#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/string-to-integer-atoi/?envType=problem-list-v2&envId=string
        
*/      
class Solution {
public:
    int myAtoi(string s) {
        int i = 0, sign = 1;
        long long ans = 0;

        while (i < s.length() and s[i] == ' ') {
            i++;
        }
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        while (i < s.length()) {
            if (s[i] >= '0' and s[i] <= '9') {
                ans = ans * 10 + (s[i] - '0');

                if (ans > INT_MAX and sign == -1) {
                    return INT_MIN;
                } else if (ans > INT_MAX and sign == 1) {
                    return INT_MAX;
                }
                i++;
            } else {
                return ans * sign;
            }
        }

        return ans * sign;
    }
};    
int main(){
    
    
    return 0;
}