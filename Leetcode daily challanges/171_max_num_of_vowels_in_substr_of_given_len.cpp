#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/maximum-number-of-vowels-in-a-substring-of-given-length/description/?envType=study-plan-v2&envId=leetcode-75

*/
class Solution {
    public:
        bool isVowel(char ch) {
            return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u';
        }
        int maxVowels(string s, int k) {
            int n = s.length();
            int i = 0, j = 0, vowelCnt = 0, maxVowelCnt = 0;
    
            while (j < n) {
                if (isVowel(s[j])) {
                    vowelCnt++;
                }
    
                if (j - i + 1 == k) {
                    maxVowelCnt = max(maxVowelCnt, vowelCnt);
                    if (isVowel(s[i])) {
                        vowelCnt--;
                    }
                    i++;
                }
    
                j++;
            }
    
            return maxVowelCnt;
        }
    };
int main() {


    return 0;
}