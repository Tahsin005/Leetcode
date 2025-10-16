#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/equal-score-substrings/description/

*/
class Solution {
public:
    bool scoreBalance(string s) {
        int target = 0;
        for(int i = 0 ; i < s.size(); i++) {
            target = target + (s[i] - 'a' + 1);
        }
        int curr = 0;
        if (target % 2 == 0) {
            target /= 2;
            for(int i = 0 ; i < s.size(); i++){
                curr = curr + (s[i] - 'a' + 1);
                if (curr == target) return true;
            }
        }
        return false;
    }
};
int main() {


    return 0;
}