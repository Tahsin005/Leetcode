#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/guess-number-higher-or-lower/description/?envType=study-plan-v2&envId=leetcode-75

*/
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 */
int guess(int num) {

}

 class Solution {
    public:
        int guessNumber(int n) {
            int l = 1, r = n;

            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (guess(mid) == 0) return mid;
                else if (guess(mid) == -1) r = mid - 1;
                else if (guess(mid) == 1) l = mid + 1;
            }

            return -1;
        }
};
int main() {


    return 0;
}