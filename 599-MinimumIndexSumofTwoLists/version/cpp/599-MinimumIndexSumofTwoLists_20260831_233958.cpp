// Last updated: 31/08/2026, 23:39:58
1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        int count = 0;
5        int size = flowerbed.size();
6
7        for (int i = 0; i < size; ++i) {
8            if (flowerbed[i] == 0) {
9                bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
10                bool emptyRight = (i == size - 1) || (flowerbed[i + 1] == 0);
11
12                if (emptyLeft && emptyRight) {
13                    flowerbed[i] = 1;
14                    count++;
15                    if (count >= n) return true;
16                }
17            }
18        }
19
20        return count >= n;
21    }
22};
23