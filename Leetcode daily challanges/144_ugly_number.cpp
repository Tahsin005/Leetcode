#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/ugly-number/description/?envType=daily-question&envId=2025-01-18

*/
class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;
        while(n > 1) {
            if (n % 2 == 0) n = n / 2;
            else if (n % 3 == 0) n = n / 3;
            else if (n % 5 == 0) n = n / 5;
            else break;
        }
        
        return (n == 1); 
    }
};
int main() {


    return 0;
}