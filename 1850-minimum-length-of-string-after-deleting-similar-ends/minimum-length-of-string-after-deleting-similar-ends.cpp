class Solution {
public:
    int minimumLength(string s) {
       
      int i = 0, j = s.length() - 1;

    while (i < j && s[i] == s[j]) {

        char current = s[i];

        while (i <= j && s[i] == current) {
            i++;
        }

        while (i <= j && s[j] == current) {
            j--;
        }
    }

    return j - i + 1;
    }
};