// Last updated: 04/06/2026, 11:29:44
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5        
6        for (string& t : tokens) {
7            if (t == "+" || t == "-" || t == "*" || t == "/") {
8                int b = st.top(); st.pop();
9                int a = st.top(); st.pop();
10                
11                if (t == "+") st.push(a + b);
12                else if (t == "-") st.push(a - b);
13                else if (t == "*") st.push(a * b);
14                else if (t == "/") st.push(a / b);
15            } else {
16                st.push(stoi(t));
17            }
18        }
19        
20        return st.top();
21    }
22};