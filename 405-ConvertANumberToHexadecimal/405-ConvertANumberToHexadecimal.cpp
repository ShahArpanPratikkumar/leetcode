// Last updated: 30/07/2026, 10:07:09
class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";
        
        string hex_map = "0123456789abcdef";
        string result = "";
        
        // Cast to unsigned int to handle negative numbers via two's complement automatically
        unsigned int n = num; 
        
        while (n > 0) {
            // Extract the last 4 bits and map to the corresponding hex character
            result = hex_map[n & 0xf] + result;
            // Shift right by 4 bits to process the next hex digit
            n >>= 4;
        }
        
        return result;
    }
};