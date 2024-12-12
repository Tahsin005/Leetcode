#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/destination-city/

*/
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        set<string> st;

        for (auto a: paths) {
            auto x = a[0];
            st.insert(x);
        }

        for (auto a: paths) {
            auto y = a[1];
            if (st.find(y) == st.end()) {
                return y;
            }
        }

        return "";
    }
};
int main(){


    return 0;
}