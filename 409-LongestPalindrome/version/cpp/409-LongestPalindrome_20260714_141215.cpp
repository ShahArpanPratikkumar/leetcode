// Last updated: 14/07/2026, 14:12:15
1class Solution {
2public:
3    int longestPalindrome(string s) {
4        unordered_map<char, int> counts;
5        for (char c : s) {
6            counts[c]++;
7        }
8        
9        int length = 0;
10        bool has_odd = false;
11        
12        for (auto& pair : counts) {
13            int count = pair.second;
14            // Add the largest even amount of this character
15            length += (count / 2) * 2;
16            
17            // Track if we have any leftover odd characters
18            if (count % 2 != 0) {
19                has_odd = true;
20            }
21        }
22        
23        // If there's an odd character left over, it can sit perfectly in the center
24        if (has_odd) {
25            length += 1;
26        }
27        
28        return length;
29    }
30};