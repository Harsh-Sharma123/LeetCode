class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v;
        for(int i=0;i<prices.size();i++){
            int dis = 0;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j] <= prices[i]){
                    dis = prices[j];
                    break;
                }
            }
            v.push_back(prices[i]-dis);
        }
        return v;
    }
};