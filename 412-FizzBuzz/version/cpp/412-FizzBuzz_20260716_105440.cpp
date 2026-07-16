// Last updated: 16/07/2026, 10:54:40
1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> answer;
5        
6        for (int i = 1; i <= n; ++i) {
7            if (i % 3 == 0 && i % 5 == 0) {
8                answer.push_back("FizzBuzz");
9            } else if (i % 3 == 0) {
10                answer.push_back("Fizz");
11            } else if (i % 5 == 0) {
12                answer.push_back("Buzz");
13            } else {
14                answer.push_back(to_string(i));
15            }
16        }
17        
18        return answer;
19    }
20};