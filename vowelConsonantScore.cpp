class Solution {
public:
    int vowelConsonantScore(string s) {
        string vowels = "aeiou";

        int v = 0, l = 0;
        for (char ch : s) {
            if (isalpha(ch)) l++;
            if (vowels.find(ch) != string::npos) v++;
        }

        int c = l - v;
        return (c > 0) ? (v / c) : 0;
    }
};
