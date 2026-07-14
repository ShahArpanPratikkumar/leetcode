// Last updated: 14/07/2026, 11:58:16
1class Solution {
2public:
3    vector<string> readBinaryWatch(int turnedOn) {
4        vector<string> result;
5        
6        // Loop through all possible hours and minutes
7        for (int h = 0; h < 12; h++) {
8            for (int m = 0; m < 60; m++) {
9                // Count set bits in both hour and minute
10                if (__builtin_popcount(h) + __builtin_popcount(m) == turnedOn) {
11                    // Format minutes with a leading zero if it's less than 10
12                    result.push_back(to_string(h) + (m < 10 ? ":0" : ":") + to_string(m));
13                }
14            }
15        }
16        
17        return result;
18    }
19};