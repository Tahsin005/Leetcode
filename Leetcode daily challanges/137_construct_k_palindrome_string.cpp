#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/construct-k-palindrome-strings/description/?envType=daily-question&envId=2025-01-11

*/
class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) return false;
        if (s.length() == k) return true;

        vector<int> freq(26);
        int oddCount = 0;

        for (auto& chr : s) freq[chr - 'a']++;

        for (int i = 0; i < 26; i++) {
            oddCount += (freq[i] & 1);
        }

        return (oddCount <= k);
    }
};
int main() {


    return 0;
}