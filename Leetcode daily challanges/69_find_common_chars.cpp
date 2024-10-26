#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/find-common-characters/

*/
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();

        vector<int> hashMap(26, 0);

        for (char ch: words[0]) {
            hashMap[ch - 'a']++;
        }

        for (int i = 1; i < n; i++) {
            vector<int> hashMap2(26, 0);

            for (char ch: words[i]) {
                hashMap2[ch - 'a']++;
            }

            for (int j = 0; j < 26; j++) {
                hashMap[j] = min(hashMap[j], hashMap2[j]);
            }
        }

        vector<string> ans;

        for (int i = 0; i < 26; i++) {
            while (hashMap[i]--) {
                ans.push_back(string(1, i + 'a'));
            }
        }

        return ans;
    }
};
int main(){


    return 0;
}