// Last updated: 30/07/2026, 10:06:33
class Solution {
public:
    int maxVowels(string s, int k) {
        int current = 0, max_cnt = 0;

        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                current++;
            }

            if (i >= k) {
                char out = s[i - k];
                if (out == 'a' || out == 'e' || out == 'i' || out == 'o' || out == 'u') {
                    current--;
                }
            }

            max_cnt = max(max_cnt, current);
        }

        return max_cnt;
    }
};