#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/adding-spaces-to-a-string/?envType=daily-question&envId=2024-12-03

*/
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int val : spaces) {
            minHeap.push(val);
        }

        string ans = "";
        int idx = 0;
        for (int i = 0; i < s.length(); i++) {
            if (!minHeap.empty() and idx == minHeap.top()) {
                ans += ' ';
                ans += s[i];
                minHeap.pop();
            } else {
                ans += s[i];
            }
            idx++;
        }

        return ans;
    }
};
int main(){


    return 0;
}