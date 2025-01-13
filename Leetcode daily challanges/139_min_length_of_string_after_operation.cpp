#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-length-of-string-after-operations/?envType=daily-question&envId=2025-01-13

*/
class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> charFrequencyMap;
        for (char currentChar : s) {
            charFrequencyMap[currentChar]++;
        }

        int deleteCount = 0;
        for (auto& pair : charFrequencyMap) {
            int frequency = pair.second;
            if (frequency % 2 == 1) {
                deleteCount += frequency - 1;
            } else {
                deleteCount += frequency - 2;
            }
        }

        return s.length() - deleteCount;
    }
};
int main() {


    return 0;
}