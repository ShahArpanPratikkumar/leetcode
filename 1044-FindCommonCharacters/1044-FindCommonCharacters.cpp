// Last updated: 30/07/2026, 10:06:43
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;

        string first = words[0];

        for (char ch : first) {
            bool found = true;

            for (int i = 1; i < words.size(); i++) {
                int pos = words[i].find(ch);

                if (pos == string::npos) {
                    found = false;
                    break;
                }

                words[i].erase(pos, 1); // remove used character
            }

            if (found) {
                ans.push_back(string(1, ch));
            }
        }

        return ans;
    }
};