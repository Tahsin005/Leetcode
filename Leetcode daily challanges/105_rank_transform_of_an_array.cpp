#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/rank-transform-of-an-array/description/?envType=daily-question&envId=2024-11-29

*/
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s;
        for (int &num : arr) {
            s.insert(num);
        }
        int rank = 1;
        unordered_map<int, int> mpp;
        for (auto it = s.begin(); it != s.end(); ++it){
            mpp[*it] = rank;
            ++rank;
        }
        const int m = arr.size();
        for (int i = 0; i < m; ++i){
            arr[i] = mpp[arr[i]];
        }
        return arr;
    }
};
int main(){


    return 0;
}