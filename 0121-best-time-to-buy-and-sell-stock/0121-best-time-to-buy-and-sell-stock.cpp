class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int bestBuy = prices[0];
        int n = prices.size();

        for(int i=0; i<n; i++){
            bestBuy = min(bestBuy, prices[i]);
            if(prices[i] > bestBuy){
                profit = max(profit, prices[i] - bestBuy);
            }
            
        }
        return profit;
    }
};