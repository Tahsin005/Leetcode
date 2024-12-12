#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/happy-number/
        
*/       
class Solution {
public:
    bool isHappy(int n) {
        set<int> st;

        while (true) {
            int val = 0;

            while (n > 0) {
                int digit = n % 10;
                val += digit * digit;
                n /= 10;
            }

            if (val == 1) return true;
            
            if (st.find(val) != st.end()) {
                return false;
            }

            st.insert(val);

            n = val;
        }


        return false;
    }
};   
int main(){
    
    
    return 0;
}