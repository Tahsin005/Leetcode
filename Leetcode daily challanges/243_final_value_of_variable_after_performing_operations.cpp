#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/final-value-of-variable-after-performing-operations/description/?envType=problem-list-v2&envId=string

*/
class Solution {
    public:
        int finalValueAfterOperations(vector<string>& operations) {
            int n = operations.size();
            int x = 0;
            for (int i = 0; i < n; i++) {
                if (operations[i] == "X++" or operations[i] == "++X") x++;
                else x--;
            }
            return x;
        }
};    
int main() {


    return 0;
}