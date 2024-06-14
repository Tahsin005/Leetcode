#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/top-k-frequent-elements/description/
        
*/  
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        int mx = -1;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
            // mx = max(mx, )
        }
        vector<pair<int,int>> v;
        for (auto [x, y]: mp) {
            v.push_back(make_pair(y, x));
        }
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        });
        vector<int> ans;    
        for (int i = 0; i < v.size(); i++) {
            if (k > 0) {
                ans.push_back(v[i].second);
                k--;
            } 
        }

        return ans;
    }
};        
int main(){
    
    
    return 0;
}