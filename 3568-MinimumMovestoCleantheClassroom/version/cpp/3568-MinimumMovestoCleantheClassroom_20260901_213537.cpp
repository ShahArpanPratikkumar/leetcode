// Last updated: 01/09/2026, 21:35:37
1class Solution {
2public:
3    int minMoves(vector<string>& classroom, int energy) {
4        int m = classroom.size(), n = classroom[0].size();
5        int startX = -1, startY = -1;
6        vector<pair<int, int>> litters;
7
8        for (int i = 0; i < m; ++i) {
9            for (int j = 0; j < n; ++j) {
10                if (classroom[i][j] == 'S') startX = i, startY = j;
11                else if (classroom[i][j] == 'L') litters.push_back({i, j});
12            }
13        }
14
15        int targetMask = (1 << litters.size()) - 1;
16        if (targetMask == 0) return 0;
17
18        // Map (r, c) of each litter cell to bit index
19        auto getLitterIdx = [&](int r, int c) {
20            for (int i = 0; i < litters.size(); ++i) {
21                if (litters[i].first == r && litters[i].second == c) return i;
22            }
23            return -1;
24        };
25
26        // Stores maximum remaining energy reached for (row, col, mask)
27        vector<vector<vector<int>>> maxEnergy(m, vector<vector<int>>(n, vector<int>(1 << litters.size(), -1)));
28        
29        // Queue stores {r, c, mask, current_energy, steps}
30        queue<tuple<int, int, int, int, int>> q;
31
32        int initMask = 0;
33        int startLitter = getLitterIdx(startX, startY);
34        if (startLitter != -1) initMask |= (1 << startLitter);
35
36        q.push({startX, startY, initMask, energy, 0});
37        maxEnergy[startX][startY][initMask] = energy;
38
39        int dirs[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
40
41        while (!q.empty()) {
42            auto [r, c, mask, e, steps] = q.front();
43            q.pop();
44
45            if (mask == targetMask) return steps;
46            if (e == 0) continue;
47
48            for (auto& d : dirs) {
49                int nr = r + d[0], nc = c + d[1];
50
51                if (nr < 0 || nr >= m || nc < 0 || nc >= n || classroom[nr][nc] == 'X') continue;
52
53                int nextE = e - 1;
54                int nextMask = mask;
55
56                if (classroom[nr][nc] == 'R') {
57                    nextE = energy;
58                } else if (classroom[nr][nc] == 'L') {
59                    int idx = getLitterIdx(nr, nc);
60                    if (idx != -1) nextMask |= (1 << idx);
61                }
62
63                if (nextE > maxEnergy[nr][nc][nextMask]) {
64                    maxEnergy[nr][nc][nextMask] = nextE;
65                    q.push({nr, nc, nextMask, nextE, steps + 1});
66                }
67            }
68        }
69
70        return -1;
71    }
72};