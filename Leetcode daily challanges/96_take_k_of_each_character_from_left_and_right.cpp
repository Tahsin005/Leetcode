#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/take-k-of-each-character-from-left-and-right/?envType=daily-question&envId=2024-11-20

*/
class Solution {
public:
    int takeCharacters(string s, int k) {
        vector<int> count(3, 0);
        int n = s.length();

        for (char c: s) {
            count[c - 'a']++;
        }

        for (int i = 0; i < 3; i++) {
            if (count[i] < k) return -1;
        }

        vector<int> window(3, 0);

        int i = 0, mx = 0;

        for (int j = 0; j < n; j++) {
            window[s[j] - 'a']++;

            while (i <= j and (count[0] - window[0] < k or count[1] - window[1] < k or count[2] - window[2] < k)) {
                window[s[i++] - 'a']--;
            }

            mx = max(mx, j - i + 1);
        }

        return n - mx;
    }
};
int main(){


    return 0;
}