#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/rotate-string/

*/
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) {
            return false;
        }

        string concatenated = s + s;

        if (concatenated.find(goal) != string::npos) {
            return true;
        }

        return false;
    }
};
int main(){


    return 0;
}