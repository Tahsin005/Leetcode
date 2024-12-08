#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/sort-the-people/description/?envType=daily-question&envId=2024-12-08

*/
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> v;

        for (int i = 0; i < names.size(); i++) {
            v.push_back({heights[i], names[i]});
        }

        sort(v.begin(), v.end(), [](pair<int, string> &a, pair<int, string> &b) {
            return a.first > b.first;
        });

        vector<string> ans;
        for (int i = 0; i < names.size(); i++) {
            ans.push_back(v[i].second);
        }

        return ans;
    }
};
int main(){


    return 0;
}