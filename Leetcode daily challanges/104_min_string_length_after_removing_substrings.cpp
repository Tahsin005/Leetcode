#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/minimum-string-length-after-removing-substrings/submissions/1464846247/?envType=daily-question&envId=2024-11-28

*/
class Solution {
public:
    int minLength(string s) {
        while (s.find("AB") != -1 or s.find("CD") != -1) {
            if (s.find("AB") != -1) {
                s.erase(s.find("AB"), 2);
            } else if (s.find("CD") != -1) {
                s.erase(s.find("CD"), 2);
            }
        }

        return s.length();
    }
};
int main(){


    return 0;
}