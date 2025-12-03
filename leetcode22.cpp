class Solution {
public:
    bool isPalindrome(string &s) {
        int sz = s.length() - 1;
        int bgn = 0;
        while (bgn <= sz) {
            if (s[bgn] != s[sz])
                return false;
            bgn++, sz--;
        }
        return true;
    }

    int countSubstrings(string s) {
        int res = 0;
        int sz = s.length();
        for (int i = 0; i < sz; i++) {
            string subStr = "";
            subStr += s[i];
            for (int j = i + 1; j < sz; j++) {
                subStr += s[j];
                res += isPalindrome(subStr);
            }
        }
        return res + sz; 
    }
};
