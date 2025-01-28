class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int val = prices[0], profit = 0;
        for(int i=1;i<prices.size();i++){
           val = min(val, prices[i]);
           profit = max(profit, prices[i]-val); 
        }
        return profit;
    }
};