// Last updated: 06/07/2026, 14:26:25
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int buy = prices[0];
5        int profit = 0;
6
7        for (int i = 1; i < prices.size(); i++) {
8            if (prices[i] < buy)
9                buy = prices[i];
10            else
11                profit = max(profit, prices[i] - buy);
12        }
13
14        return profit;
15    }
16};