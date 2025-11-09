#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-operations-to-obtain-zero/description/?envType=daily-question&envId=2025-11-09

*/
class Solution {
public:
    int countOperations(int num1, int num2) {
        int res = 0;
        while (num1 && num2) {
            res += num1 / num2;
            num1 %= num2;
            swap(num1, num2);
        }
        return res;
    }
};
int main() {


    return 0;
}