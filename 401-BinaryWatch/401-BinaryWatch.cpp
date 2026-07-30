// Last updated: 30/07/2026, 10:07:12
class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;
        
        // Loop through all possible hours and minutes
        for (int h = 0; h < 12; h++) {
            for (int m = 0; m < 60; m++) {
                // Count set bits in both hour and minute
                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
                    // Format minutes with a leading zero if it's less than 10
                    result.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
                }
            }
        }
        
        return result;
    }
};