// Last updated: 30/07/2026, 10:08:11
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";

        while (columnNumber > 0) {
            columnNumber--;   // Make it 0-based
            ans = char('A' + (columnNumber % 26)) + ans;
            columnNumber /= 26;
        }

        return ans;
    }
};