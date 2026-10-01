class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int first_small = INT_MAX;
        int profit = 0;

        for(int i = 0; i<prices.size(); i++){
            first_small = min(first_small, prices[i]);
            profit = max(profit, prices[i] - first_small);
        }

        return profit;
    }
};
