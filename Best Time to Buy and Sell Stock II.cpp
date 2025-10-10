class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> maxProfit(prices.size()+1);
        for(int i = 1; i<prices.size(); i++){
            maxProfit[i+1] = max(prices[i] - prices[i-1] + maxProfit[i], maxProfit[i]);
        }
        return maxProfit[prices.size()];
    }
};