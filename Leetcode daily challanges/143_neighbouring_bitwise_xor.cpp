#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/neighboring-bitwise-xor/description/?envType=daily-question&envId=2025-01-17

*/
class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int XOR = 0;
        for (auto element : derived) {
            XOR = XOR ^ element;
        }
        return XOR == 0;
    }
};
int main() {


    return 0;
}