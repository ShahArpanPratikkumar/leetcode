// Last updated: 14/07/2026, 13:51:30
1class Solution {
2public:
3    string toHex(int num) {
4        if (num == 0) return "0";
5        
6        string hex_map = "0123456789abcdef";
7        string result = "";
8        
9        // Cast to unsigned int to handle negative numbers via two's complement automatically
10        unsigned int n = num; 
11        
12        while (n > 0) {
13            // Extract the last 4 bits and map to the corresponding hex character
14            result = hex_map[n & 0xf] + result;
15            // Shift right by 4 bits to process the next hex digit
16            n >>= 4;
17        }
18        
19        return result;
20    }
21};