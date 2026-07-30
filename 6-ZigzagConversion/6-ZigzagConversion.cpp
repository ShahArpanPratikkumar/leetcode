// Last updated: 30/07/2026, 10:09:19
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        vector<string> v(numRows);
        int row = 0;
        bool down = true;

        for (char ch : s) {
            v[row] += ch;

            if (row == 0)
                down = true;
            else if (row == numRows - 1)
                down = false;

            if (down)
                row++;
            else
                row--;
        }

        string ans = "";
        for (string str : v)
            ans += str;

        return ans;
    }
};