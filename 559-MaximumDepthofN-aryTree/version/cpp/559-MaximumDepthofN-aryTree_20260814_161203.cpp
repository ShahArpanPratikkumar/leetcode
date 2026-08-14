// Last updated: 14/08/2026, 16:12:03
1class Solution {
2public:
3    int maxDepth(Node* root) {
4        if (!root) return 0;
5        
6        queue<Node*> q;
7        q.push(root);
8        int depth = 0;
9        
10        while (!q.empty()) {
11            int levelSize = q.size();
12            depth++;
13            
14            for (int i = 0; i < levelSize; ++i) {
15                Node* curr = q.front();
16                q.pop();
17                
18                for (Node* child : curr->children) {
19                    if (child) {
20                        q.push(child);
21                    }
22                }
23            }
24        }
25        
26        return depth;
27    }
28};