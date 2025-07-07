class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";

    while (word.length() < k) {
        string next;
        for (char c : word) {
            if (c == 'z') next += 'a';
            else next += char(c + 1);
        }
        word += next;
    }

    return word[k - 1];
}
};