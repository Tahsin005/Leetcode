#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/boats-to-save-people/
        
*/          
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int i = 0, j = people.size() - 1, ans = 0;
        while (i <= j) {
            if (people[i] + people[j] <= limit) {
                i++, j--, ans++;
            } else {
                ans++, j--;
            }
        }

        return ans;
    }
};
int main(){
    
    
    return 0;
}