// Last updated: 30/07/2026, 10:06:27
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for (string s : sentences) {
            int words = 1; 

            for (char ch : s) {
                if (ch == ' ')
                    words++;
            }

            maxWords = max(maxWords, words);
        }

        return maxWords;
    }
};