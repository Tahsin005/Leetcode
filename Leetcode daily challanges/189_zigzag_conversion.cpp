#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/zigzag-conversion/description/

*/
class Solution {
    public:
        string convert(string s, int numRows) {
            if (numRows == 1 or numRows >= s.length()) {
                return s;
            }
    
            int idx = 0, move = 0;
    
            vector<vector<char>> rows(numRows);
    
            for (char c : s) {
                rows[idx].push_back(c);
                if (idx == 0) {
                    move = 1;
                } else if (idx == numRows - 1) {
                    move = -1;
                }
                idx += move;
            }
    
            string result = "";
            for (auto& row : rows) {
                for (char c : row) {
                    result += c;
                }
            }
    
            return result; 
        }
};
int main() {


    return 0;
}