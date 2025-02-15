#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/find-the-punishment-number-of-an-integer/description/?envType=daily-question&envId=2025-02-15

*/
class Solution {
    public:
        bool backTrack(string &num, int target, int start, int currSum) {
            if (currSum > target) return false;
    
            if (start == num.length()) return currSum == target;
    
            for (int i = start + 1; i <= num.length(); i++) {
                string partStr = num.substr(start, i - start);
                int partNum = stoi(partStr);
    
                if (backTrack(num, target, i, currSum + partNum)) {
                    return true;
                }
            }
    
            return false;
        }
        bool canPartition(string &num, int target) {
            return backTrack(num, target, 0, 0);
        }
        int punishmentNumber(int n) {
            int sum = 0;
    
            for (int i = 1; i <= n; i++) {
                int sqr = i * i;
                string num = to_string(sqr);
                if (canPartition(num, i)) {
                    sum += sqr;
                }
            }
    
            return sum;
        }
};
int main() {


    return 0;
}