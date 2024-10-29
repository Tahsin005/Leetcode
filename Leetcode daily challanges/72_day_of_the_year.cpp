#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/day-of-the-year/

*/
class Solution {
public:
    int dayOfYear(string date) {
        string d = date.substr(8, 2);
        int dd = stoi(d);

        string m = date.substr(5, 2);
        int mm = stoi(m);

        string y = date.substr(0, 4);
        int yy = stoi(y);

        int daysOfMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (yy % 400 == 0 or (yy % 4 == 0 and yy % 100 != 0)) {
            daysOfMonth[1] = 29;
        }

        for (int i = 0; i < mm - 1; i++) {
            dd += daysOfMonth[i];
        }

        return dd;
    }
};
int main(){


    return 0;
}