#include<bits/stdc++.h>
#define ll long long
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        int MAXN = 1e5;
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (freq[nums[i]] >= 2) {
                return true;
            }
        }

        return false;
    }
};
int main(){
    
    
    return 0;
}