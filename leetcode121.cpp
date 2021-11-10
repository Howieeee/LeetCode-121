class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit= 0;
        int min = prices[0];
        for(int i=1;i<prices.size();i++){
            
            if(min > prices[i])
                min = prices[i];
            else
                max_profit = max(max_profit,prices[i]-min);
            
            //cout << min << " " <<max_profit<<endl;
        }
        return max_profit;
    }
};
