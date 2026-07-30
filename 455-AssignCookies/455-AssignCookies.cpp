// Last updated: 30/07/2026, 10:06:58
class Solution {
public:
    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
        // Sort both greed factors and cookie sizes
        std::sort(g.begin(), g.end());
        std::sort(s.begin(), s.end());

        int child = 0;
        int cookie = 0;

        // Try to satisfy the child with the smallest greed factor first
        while (child < g.size() && cookie < s.size()) {
            if (s[cookie] >= g[child]) {
                child++; // Child is content, move to the next child
            }
            cookie++; // Try the next cookie
        }

        return child; // Total number of content children
    }
};