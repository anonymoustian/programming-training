class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;
        int profit = 0;
        int cur_min = prices[0];
        for (auto i : prices) {
            profit = max(profit, i - cur_min);
            cur_min = min(cur_min, i);
        }
        return profit;
    }
};