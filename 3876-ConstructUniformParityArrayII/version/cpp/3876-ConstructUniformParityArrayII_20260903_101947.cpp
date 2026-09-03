// Last updated: 03/09/2026, 10:19:47
1class Solution {
2public:
3    bool uniformArray(vector<int>& nums1) {
4        int min_val = INT_MAX;
5        bool has_odd = false;
6
7        for (int num : nums1) {
8            min_val = min(min_val, num);
9            if (num % 2 != 0) {
10                has_odd = true;
11            }
12        }
13
14        // If the minimum element is odd, we can make all elements odd.
15        if (min_val % 2 != 0) return true;
16
17        // If minimum is even, we can only succeed if there are no odd numbers at all
18        // (so all are already even). If an odd number exists, neither can the smallest
19        // odd become even, nor can the smallest even become odd.
20        return !has_odd;
21    }
22};