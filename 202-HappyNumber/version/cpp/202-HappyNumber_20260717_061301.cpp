// Last updated: 17/07/2026, 06:13:01
1class Solution {
2private:
3    int getNext(int n) {
4        int totalSum = 0;
5        while (n > 0) {
6            int d = n % 10;
7            totalSum += d * d;
8            n /= 10;
9        }
10        return totalSum;
11    }
12
13public:
14    bool isHappy(int n) {
15        int slow = n;
16        int fast = getNext(n);
17        
18        while (fast != 1 && slow != fast) {
19            slow = getNext(slow);
20            fast = getNext(getNext(fast));
21        }
22        
23        return fast == 1;
24    }
25};