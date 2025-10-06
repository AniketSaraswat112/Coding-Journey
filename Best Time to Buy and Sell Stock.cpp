class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> maxArray(prices.size());
        int maxPrice = INT_MIN, result = INT_MIN;
        for(int i = prices.size()-1; i>=0; i--){
            maxPrice = max(maxPrice, prices[i]);
            maxArray[i] = maxPrice;
        }
        for(int i = 0; i<prices.size(); i++){
            result = max(result, maxArray[i] - prices[i]);
        }
        return result;
    }
};