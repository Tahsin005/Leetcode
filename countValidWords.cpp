class Solution {
public:
    int countValidWords(string sentence) {
        regex valid(R"((?:[!.,]|[a-z]+(?:-[a-z]+)?[!.,]?))");

        stringstream ss(sentence);
        string word;
        int count = 0;

        while (ss >> word) {
            if (regex_match(word, valid)) {
                count++;
            }
        }

        return count;
    }
};
