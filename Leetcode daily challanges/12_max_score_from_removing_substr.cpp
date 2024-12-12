#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/maximum-score-from-removing-substrings/description/?envType=daily-question&envId=2024-07-12
        
*/  
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        string candid;
        int curr = x;
        if (x > y) {
            candid = "ab";
            curr = x;
        } else if (x < y) {
            candid = "ba";
            curr = y;
        } else {
            candid = "ab";
            curr = x;
        }

        long long ans = 0;
        for (auto ch: s) {
            if (!st.empty()) {
                if (st.top() == candid[0]) {
                    if (ch == candid[1]) {
                        ans += (long long)curr;
                        st.pop();
                    } else {
                        st.push(ch);
                    }
                } else {
                    st.push(ch);
                }
            } else {
                st.push(ch);
            }
        }

        reverse(candid.begin(), candid.end());
        if (curr == x) curr = y;
        else if (curr == y) curr = x;
        string remaining = "";

        while (!st.empty()) {
            remaining += st.top();
            st.pop();
        }


        reverse(remaining.begin(), remaining.end());
        s = remaining;

        for (auto ch: s) {
            if (!st.empty()) {
                if (st.top() == candid[0]) {
                    if (ch == candid[1]) {
                        ans += (long long)curr;
                        st.pop();
                    } else {
                        st.push(ch);
                    }
                } else {
                    st.push(ch);
                }
            } else {
                st.push(ch);
            }
        }
        return ans;
    }
};        
int main(){
    
    
    return 0;
}