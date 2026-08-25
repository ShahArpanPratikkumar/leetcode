// Last updated: 25/08/2026, 10:41:32
1class Solution {
2public:
3    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
4        vector<vector<int>> adj(n);
5        for (const auto& inv : invocations) {
6            adj[inv[0]].push_back(inv[1]);
7        }
8
9        // Step 1: Find all suspicious methods reachable from k
10        vector<bool> suspicious(n, false);
11        vector<int> st = {k};
12        suspicious[k] = true;
13
14        while (!st.empty()) {
15            int u = st.back();
16            st.pop_back();
17
18            for (int v : adj[u]) {
19                if (!suspicious[v]) {
20                    suspicious[v] = true;
21                    st.push_back(v);
22                }
23            }
24        }
25
26        // Step 2: Check if any non-suspicious method invokes a suspicious method
27        bool can_remove = true;
28        for (const auto& inv : invocations) {
29            int u = inv[0];
30            int v = inv[1];
31            if (!suspicious[u] && suspicious[v]) {
32                can_remove = false;
33                break;
34            }
35        }
36
37        // Step 3: Collect the result
38        vector<int> result;
39        for (int i = 0; i < n; ++i) {
40            if (!can_remove || !suspicious[i]) {
41                result.push_back(i);
42            }
43        }
44
45        return result;
46    }
47};