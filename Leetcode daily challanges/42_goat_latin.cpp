#include<bits/stdc++.h>
#define ll long long
using namespace std;
/*
        
        
https://leetcode.com/problems/goat-latin/
        
*/          
class Solution {
public:
    string addma(string &s) {
        s += "ma";
        return s;
    }
    string adda(string &s, int n) {
        for(int i = 0; i < n; i++) {
            s.push_back('a');
        }
        return s;
    }
    bool checkVowel(char ch) {
        return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U';
    }
    void breakString(string ss, vector<string>& s) {
        string temp = "";
        for (auto it : ss) {
            if (it == ' ') {
                s.push_back(temp);
                temp = "";
            } else {
                temp.push_back(it);
            }
        }
        if(!temp.empty()) s.push_back(temp);
        return;
    }
    string toGoatLatin(string sentence) {
        string ans = "";
        vector<string> strings;
        breakString(sentence, strings);
        for(int i = 0; i < strings.size(); i++) {
            string word = strings[i];
            if (checkVowel(word[0])) {
                ans += word;
            } else {
                char ch = word[0];
                word = word.substr(1);
                ans += word;
                ans.push_back(ch);
            }
            addma(ans);
            adda(ans, i + 1);
            ans.push_back(' ');
        }
        if (ans[ans.size() - 1] == ' '){
            ans.pop_back();
        }
        return ans;
    }
};
int main(){
    
    
    return 0;
}