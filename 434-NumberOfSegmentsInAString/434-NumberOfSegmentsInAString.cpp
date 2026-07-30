// Last updated: 30/07/2026, 10:07:03
class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string word;
        int count = 0;

        while (ss >> word) {
            count++;
        }

        return count;
    }
};