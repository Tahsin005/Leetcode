#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/count-of-substrings-containing-every-vowel-and-k-consonants-ii/description/?envType=daily-question&envId=2025-03-10

*/
class Solution {
    public:
        bool isVowel (char c) {
            return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
        }

        long long atLeastK (string& word, int k) {
            int n = word.size();
            long long ans = 0;
            int consonants = 0;
            int left = 0;
            unordered_map<char, int> vowel_map;

            for (int right = 0; right < n; right++) {
                if (isVowel(word[right])) {
                    vowel_map[word[right]]++;
                } else {
                    consonants++;
                }

                while (vowel_map.size() == 5 and consonants >= k) {
                    ans += n - right;
                    if (isVowel(word[left])) {
                        vowel_map[word[left]]--;
                        if (vowel_map[word[left]] == 0) {
                            vowel_map.erase(word[left]);
                        }
                    } else {
                        consonants--;
                    }
                    left++;
                }
            }

            return ans;
        }

        long long countOfSubstrings(string word, int k) {
            return atLeastK(word, k) - atLeastK(word, k + 1);
        }
};
int main() {


    return 0;
}