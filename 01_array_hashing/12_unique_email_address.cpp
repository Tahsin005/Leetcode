#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/unique-email-addresses/description/
        
*/   
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        int n = emails.size();
        for (int i = 0; i < n; i++) {
            string candid = emails[i];
            int idx = 0;
            string actual_mail = "";
            while (candid[idx] != '@') {
                if (candid[idx] == '.') {
                    idx++;
                    continue;
                }
                if (candid[idx] == '+') {
                    break;
                }
                actual_mail += candid[idx];
                idx++;
            }
            bool at_symbol = false;
            for (int i = 0; i < candid.length(); i++) {
                if (candid[i] == '@') {
                    at_symbol = true;
                    actual_mail += candid[i];
                }
                else if (at_symbol) {
                    actual_mail += candid[i];
                }
            }
            st.insert(actual_mail);
        }
        return st.size();
    }
};       
int main(){
    
    
    return 0;
}