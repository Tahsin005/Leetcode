#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/removing-stars-from-a-string/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
    public:
        string removeStars(string s) {
            int i = 0, j = 0, n = s.length();
            
            for (int i = 0; i < n; i++) {
                if (s[i] == '*') {
                    j--;
                } else {
                    s[j] = s[i];
                    j++;
                }
            }
    
            return s.substr(0, j);
        }
};
int main() {


    return 0;
}