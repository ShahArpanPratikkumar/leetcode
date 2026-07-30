// Last updated: 30/07/2026, 10:09:25
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1);  // Store last index of characters
        int maxLength = 0;
        int start = 0;  // Left pointer of window
        
        for (int i = 0; i < s.length(); i++) {
            if (lastIndex[s[i]] >= start) {
                start = lastIndex[s[i]] + 1;  // Move start if duplicate found
            }
            
            lastIndex[s[i]] = i;  // Update last seen index
            maxLength = max(maxLength, i - start + 1);
        }
        
        return maxLength;
    }
};

