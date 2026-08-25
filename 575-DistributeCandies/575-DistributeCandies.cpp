// Last updated: 25/08/2026, 10:45:48
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> uniqueTypes(candyType.begin(), candyType.end());
        return min(uniqueTypes.size(), candyType.size() / 2);
    }
};