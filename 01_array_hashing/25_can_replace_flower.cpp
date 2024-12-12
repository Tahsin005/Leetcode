#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/can-place-flowers/
        
*/  
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len = flowerbed.size();
        if (n == 0) {
            return true;
        }
        if (len == 1) {
            int x = flowerbed[0];
            if (x == 0 and n == 1) {
                return true;
            } else if (x == 1 and n == 1) {
                return false;
            }
        }
         else if (len == 2) {
            int x = flowerbed[0], y = flowerbed[1];
            if ((x == 1 or y == 1) and n >= 1) {
                return false;
            }
            if ((x == 0 and y == 0) and n <= 1) {
                return true;
            } else if ((x == 0 and y == 0) and n == 2) {
                return false;
            }

        }

        int cnt = 0;
        int i = 1, sudo_len = len;

        if ((flowerbed[0] == 0 and flowerbed[1] == 0)) {
            cnt++;
            i++;
            flowerbed[0] = 1;
        }

        if ((flowerbed[len - 1] == 0 and flowerbed[len - 2] == 0)) {
            cnt++;
            flowerbed[len - 1] == 1;
            sudo_len--;
        }

        for (i = 1; i < sudo_len - 1; i++) {
            if (flowerbed[i] == 0) {
                if (flowerbed[i - 1] == 0 and flowerbed[i + 1] == 0) {
                    cnt -=- 1;
                    flowerbed[i] == 1;
                    i++;
                }
            }
        }

        
        cout << cnt << endl;
        if (n <= cnt) return true;

        return false;
    }
};        
int main(){
    
    
    return 0;
}