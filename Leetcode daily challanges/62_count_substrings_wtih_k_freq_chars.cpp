#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/count-substrings-with-k-frequency-characters-i/description/

*/
class Solution {
public:
    int numberOfSubstrings(string s, int k) {
        int n = s.length(), res = (n + 1) * n / 2;

        map<char, int> count;
        for (int i = 0, j = 0; j < n; j++) {
            count[s[j]]++;
            while (count[s[j]] >= k) {
                count[s[i]]--;
                i++;
            }
            res -= j - i + 1;
        }

        return res;
    }
};
int main(){


    return 0;
}