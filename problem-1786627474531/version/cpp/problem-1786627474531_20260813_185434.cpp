// Last updated: 13/08/2026, 18:54:34
1#include <vector>
2#include <string>
3#include <algorithm>
4
5using namespace std;
6
7struct Node {
8    int max_len;   // Longest repeating substring in segment
9    int pref_len;  // Length of repeating prefix
10    int suff_len;  // Length of repeating suffix
11    char pref_char; // Character of prefix
12    char suff_char; // Character of suffix
13    int length;    // Segment size
14};
15
16class Solution {
17private:
18    vector<Node> tree;
19
20    // Merges two segment tree nodes together
21    Node merge(const Node& left, const Node& right) {
22        Node res;
23        res.length = left.length + right.length;
24        res.pref_char = left.pref_char;
25        res.suff_char = right.suff_char;
26
27        // Calculate prefix length for combined segment
28        res.pref_len = left.pref_len;
29        if (left.pref_len == left.length && left.suff_char == right.pref_char) {
30            res.pref_len += right.pref_len;
31        }
32
33        // Calculate suffix length for combined segment
34        res.suff_len = right.suff_len;
35        if (right.suff_len == right.length && right.pref_char == left.suff_char) {
36            res.suff_len += left.suff_len;
37        }
38
39        // Calculate maximum repeating length
40        res.max_len = max(left.max_len, right.max_len);
41        if (left.suff_char == right.pref_char) {
42            res.max_len = max(res.max_len, left.suff_len + right.pref_len);
43        }
44
45        return res;
46    }
47
48    void build(const string& s, int node, int start, int end) {
49        if (start == end) {
50            tree[node] = {1, 1, 1, s[start], s[start], 1};
51            return;
52        }
53        int mid = start + (end - start) / 2;
54        build(s, 2 * node, start, mid);
55        build(s, 2 * node + 1, mid + 1, end);
56        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
57    }
58
59    void update(int node, int start, int end, int idx, char ch) {
60        if (start == end) {
61            tree[node] = {1, 1, 1, ch, ch, 1};
62            return;
63        }
64        int mid = start + (end - start) / 2;
65        if (idx <= mid) {
66            update(2 * node, start, mid, idx, ch);
67        } else {
68            update(2 * node + 1, mid + 1, end, idx, ch);
69        }
70        tree[node] = merge(tree[2 * node], tree[2 * node + 1]);
71    }
72
73public:
74    vector<int> longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {
75        int n = s.length();
76        int k = queryIndices.size();
77        tree.resize(4 * n);
78
79        build(s, 1, 0, n - 1);
80
81        vector<int> ans(k);
82        for (int i = 0; i < k; ++i) {
83            update(1, 0, n - 1, queryIndices[i], queryCharacters[i]);
84            ans[i] = tree[1].max_len;
85        }
86
87        return ans;
88    }
89};