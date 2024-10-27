#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*


https://leetcode.com/problems/reformat-date/description/

*/
class Solution {
public:
    string reformatDate(string date) {
        string ans;
        ans.push_back(date[date.length() - 4]);
        ans.push_back(date[date.length() - 3]);
        ans.push_back(date[date.length() - 2]);
        ans.push_back(date[date.length() - 1]);

        ans.push_back('-');

        string month;
        month.push_back(date[date.length() - 8]);
        month.push_back(date[date.length() - 7]);
        month.push_back(date[date.length() - 6]);

        string ch;
        if (month == "Jan")
           ch = "01";
        else if (month == "Feb")
           ch = "02";
        else if (month == "Mar")
           ch = "03";
        else if (month == "Apr")
           ch = "04";
        else if (month == "May")
           ch = "05";
        else if (month == "Jun")
           ch = "06";
        else if (month == "Jul")
           ch = "07";
        else if (month == "Aug")
           ch = "08";
        else if (month == "Sep")
           ch = "09";
        else if (month == "Oct")
           ch = "10";
        else if (month == "Nov")
           ch = "11";
        else if (month == "Dec")
           ch = "12";

        ans = ans + ch;

        string pre = "0";

        ans.push_back('-');

        if (date[1] >= '0' and date[1] <= '9') {
            ans.push_back(date[0]);
            ans.push_back(date[1]);
        } else {
            ans.push_back('0');
            ans.push_back(date[0]);
        }
        return ans;
    }
};
int main(){


    return 0;
}