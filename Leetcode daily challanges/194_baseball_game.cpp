#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/baseball-game/description/

*/
class Solution {
    public:
        int calPoints(vector<string>& operations) {
           stack<int> st;

           for (auto ch : operations) {
                if (ch == "+") {
                    int temp1 = st.top();
                    st.pop();
                    int temp2 = st.top();
                    st.push(temp1);
                    st.push(temp1+temp2);
                } else if (ch == "D") {
                    st.push(st.top()*2);
                } else if (ch == "C") {
                    st.pop();
                } else {
                    st.push(stoi(ch));
                }
            }

            int sum = 0;
            while (!st.empty()) {
                sum += st.top();
                st.pop();
            }

            return sum;
        }
};
int main() {


    return 0;
}