#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*

https://leetcode.com/problems/defanging-an-ip-address/description/

*/
class Solution {
public:
    string defangIPaddr(string address) {
        int index = 0;
        string temp = "";
        while (index < address.size()) {
            if (address[index] == '.') {
                temp += "[.]";
            } else{
                temp += address[index];
            }
            index++;
        }

        return temp;
    }
};
int main() {


    return 0;
}