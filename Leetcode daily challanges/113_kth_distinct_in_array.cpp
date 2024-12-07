#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/kth-distinct-string-in-an-array/?envType=daily-question&envId=2024-12-07

*/
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_set<string> distinctStrings;
        unordered_set<string> duplicateStrings;

        for (auto& str : arr) {
            if (duplicateStrings.count(str)) {
                continue;
            }
            if (distinctStrings.count(str)) {
                distinctStrings.erase(str);
                duplicateStrings.insert(str);
            } else {
                distinctStrings.insert(str);
            }
        }

        for (auto& str : arr) {
            if (!duplicateStrings.count(str)) {
                k--;
            }
            if (k == 0) {
                return str;
            }
        }

        return "";
    }
};
int main(){


    return 0;
}