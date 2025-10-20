#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/?envType=daily-question&envId=2025-10-20

*/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n = operations.size();
        int x = 0;
        for (int i = 0; i < n; i++) {
            bool found = operations[i].find("+") != string::npos;
            if (found) x++;
            else x--;
        }
        return x;
    }
};
int main() {


    return 0;
}