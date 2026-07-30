// Last updated: 30/07/2026, 10:07:19
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};
        
        // Count the frequency of each character in the magazine
        for (char c : magazine) {
            count[c - 'a']++;
        }
        
        // Verify if the ransom note can be formed
        for (char c : ransomNote) {
            if (--count[c - 'a'] < 0) {
                return false; // Not enough letters available
            }
        }
        
        return true;
    }
};