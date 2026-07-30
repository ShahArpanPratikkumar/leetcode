// Last updated: 30/07/2026, 10:08:14
class Solution {
public:
    void reverse(string &s, int start, int end) {
        while (start < end) {
            swap(s[start++], s[end--]);
        }
    }

    string reverseWords(string s) {
        int n = s.size();
        int i = 0, j = 0;

        while (j < n) {

            while (j < n && s[j] == ' ') j++;


            while (j < n && s[j] != ' ') {
                s[i++] = s[j++];
            }


            while (j < n && s[j] == ' ') j++;

            if (j < n) s[i++] = ' ';
        }

        s.resize(i);

        reverse(s, 0, i - 1);

        int start = 0;
        for (int end = 0; end <= i; end++) {
            if (end == i || s[end] == ' ') {
                reverse(s, start, end - 1);
                start = end + 1;
            }
        }

        return s;
    }
};