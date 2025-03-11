#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/?envType=daily-question&envId=2025-03-11

*/
class Solution {
    public:
        int numberOfSubstrings(string s) {
            int n = s.length(), total = 0, l = 0, r = 0;

            vector<int> freq(3, 0);
            while (r < n) {
                freq[s[r] - 'a']++;

                while (freq[0] > 0 and freq[1] > 0 and freq[2] > 0) {
                    total += n - r;

                    freq[s[l++] - 'a']--;
                }
                r++;
            }

            return total;
        }
};
int main() {


    return 0;
}