#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/greatest-common-divisor-of-strings/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1) ? str1.substr(0, gcd(size(str1),size(str2))) : "";
    }
};
int main() {


    return 0;
}