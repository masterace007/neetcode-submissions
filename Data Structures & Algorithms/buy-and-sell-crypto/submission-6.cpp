class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int max_num = prices.back();
        for(int i = prices.size()-2; i >= 0; --i){
            profit = max(profit, max_num - prices[i]);
            max_num = max(max_num,prices[i]);
        } 
        return profit;
    }
};
