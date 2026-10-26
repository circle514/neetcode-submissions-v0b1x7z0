class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0], profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (minPrice > prices[i]) {
                minPrice = prices[i];
            }
            if (profit < (prices[i] - minPrice)) {
                profit = prices[i] - minPrice;
            }
        }
        return profit;
    }
};
