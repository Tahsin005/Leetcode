#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/convert-the-temperature/description/

*/
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {(celsius + 273.15 ), (celsius * 1.8 + 32)};
    }
};
int main() {


    return 0;
}