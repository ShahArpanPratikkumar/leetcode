// Last updated: 11/07/2026, 02:17:36
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7        int left = 1;
8        int right = n;
9        
10        while (left < right) {
11            // Prevents potential integer overflow compared to (left + right) / 2
12            int mid = left + (right - left) / 2; 
13            
14            if (isBadVersion(mid)) {
15                // mid could be the first bad version, or the first bad version is to its left
16                right = mid;
17            } else {
18                // mid is good, so the first bad version must be strictly to its right
19                left = mid + 1;
20            }
21        }
22        
23        // When left == right, we have narrowed down to the first bad version
24        return left;
25    }
26};