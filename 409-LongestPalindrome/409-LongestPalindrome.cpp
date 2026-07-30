// Last updated: 30/07/2026, 10:07:08
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> counts;
        for (char c : s) {
            counts[c]++;
        }
        
        int length = 0;
        bool has_odd = false;
        
        for (auto& pair : counts) {
            int count = pair.second;
            // Add the largest even amount of this character
            length += (count / 2) * 2;
            
            // Track if we have any leftover odd characters
            if (count % 2 != 0) {
                has_odd = true;
            }
        }
        
        // If there's an odd character left over, it can sit perfectly in the center
        if (has_odd) {
            length += 1;
        }
        
        return length;
    }
};