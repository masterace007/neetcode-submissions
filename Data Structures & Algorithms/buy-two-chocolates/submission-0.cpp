class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(begin(prices),end(prices));
        int n = prices.size();

        if(n < 2)
        return money;
        else if((prices[0] + prices[1]) > money)
        return money;
        return money - (prices[0]+prices[1]);
    }
};