class Solution {
    bool is_vowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }
public:
    string toGoatLatin(string sentence) {
        int n = sentence.size(), cnt = 1;
        string word = "", res = "";
        for (int i = 0; i < n; i++) {
            if (sentence[i] != ' ') {
                word += sentence[i];
                continue;
            }
            if (is_vowel(tolower(word[0]))) {
                res += (word + "ma");
            } else {
                res += word.substr(1) + string(1, word[0]) + "ma";
            }
            res += string(cnt, 'a') + " ";
            cnt++;
            word = "";
        }
        if (is_vowel(tolower(word[0]))) {
            res += (word + "ma");
        } else {
            res += word.substr(1) + string(1, word[0]) + "ma";
        }
        res += string(cnt, 'a');
        return res;
    }
};
