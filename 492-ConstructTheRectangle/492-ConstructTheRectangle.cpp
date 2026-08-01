// Last updated: 01/08/2026, 21:28:53
class Solution {
public:
    vector<int> constructRectangle(int area) {
        int w = sqrt(area);
        while (area % w != 0) {
            w--;
        }
        return {area / w, w};
    }
};