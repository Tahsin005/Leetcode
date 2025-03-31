#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/?envType=problem-list-v2&envId=array

*/
class Solution {
    public:
        vector<int> minOperations(string boxes) {
            vector<int> res(boxes.length());
            for (int i = 0; i < boxes.length(); i++) {
                if (boxes[i] == '1') {
                    for (int j = 0; j < boxes.length(); j++) {
                        res[j] += abs(j - i);
                    }
                }
            }
            return res;
        }
};
int main() {


    return 0;
}