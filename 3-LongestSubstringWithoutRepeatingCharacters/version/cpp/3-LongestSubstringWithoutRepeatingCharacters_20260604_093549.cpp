// Last updated: 04/06/2026, 09:35:49
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        vector<int> lastIndex(256, -1);  // Store last index of characters
5        int maxLength = 0;
6        int start = 0;  // Left pointer of window
7        
8        for (int i = 0; i < s.length(); i++) {
9            if (lastIndex[s[i]] >= start) {
10                start = lastIndex[s[i]] + 1;  // Move start if duplicate found
11            }
12            
13            lastIndex[s[i]] = i;  // Update last seen index
14            maxLength = max(maxLength, i - start + 1);
15        }
16        
17        return maxLength;
18    }
19};