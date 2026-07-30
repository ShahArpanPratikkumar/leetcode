// Last updated: 30/07/2026, 10:07:04
class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;

        // Process digits from right to left
        while (i >= 0 || j >= 0 || carry > 0) {
            int sum = carry;

            if (i >= 0) {
                sum += num1[i] - '0';
                i--;
            }

            if (j >= 0) {
                sum += num2[j] - '0';
                j--;
            }

            carry = sum / 10;
            result.push_back((sum % 10) + '0');
        }

        // Reverse the string to get the correct order
        reverse(result.begin(), result.end());

        return result;
    }
};