#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/jewels-and-stones/description/

*/
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        unordered_set<char> setjewels(jewels.begin(), jewels.end());
        for (char s : stones) {
            if (setjewels.count(s)) res++;
        }
        return res;
    }
};
int main() {


    return 0;
}