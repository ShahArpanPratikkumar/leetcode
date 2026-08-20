// Last updated: 20/08/2026, 21:57:43
1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        unordered_set<int> uniqueTypes(candyType.begin(), candyType.end());
5        return min(uniqueTypes.size(), candyType.size() / 2);
6    }
7};