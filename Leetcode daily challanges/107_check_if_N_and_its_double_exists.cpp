#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/check-if-n-and-its-double-exist/description/?envType=daily-question&envId=2024-12-01

*/
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            for (int j = 0; j < arr.size(); j++) {
                if (i != j and arr[i] == 2 * arr[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};
int main(){


    return 0;
}