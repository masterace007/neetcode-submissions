class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        sum = 0
        temp = prices[len(prices)-1]
        for i in range(len(prices)-2, -1,-1):
            if temp > prices[i]:
                sum += (temp-prices[i])
            temp = prices[i]
        return sum