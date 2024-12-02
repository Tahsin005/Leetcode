#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/check-if-a-word-occurs-as-a-prefix-of-any-word-in-a-sentence/description/?envType=daily-question&envId=2024-12-02

*/
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string word;
        int idx = 1;

        while (ss >> word) {
            if (word.find(searchWord) == 0) return idx;
            idx++;
        }

        return -1;
    }
};
int main(){


    return 0;
}