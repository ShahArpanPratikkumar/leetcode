// Last updated: 09/06/2026, 20:13:36
1class Solution {
2public:
3    bool isPalindrome(int x) { // -121 !=  121-
4       if ( x < 0 || (x % 10 == 0 && x != 0)) // 121 == 121
5       return false;
6
7       int reve = 0 ;
8
9       while (x > reve){
10        reve = reve * 10 + x % 10;
11        x /=10 ;
12       } 
13
14       return ( x == reve || x == reve / 10 );
15    }
16};