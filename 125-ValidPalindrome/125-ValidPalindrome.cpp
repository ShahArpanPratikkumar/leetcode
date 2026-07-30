// Last updated: 30/07/2026, 10:08:22
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            while (left < right && !isalnum(s[left])) left++;
            while (left < right && !isalnum(s[right])) right--;

            if (tolower(s[left]) != tolower(s[right])) return false;

            left++;
            right--;
        }
        return true;
    }
};