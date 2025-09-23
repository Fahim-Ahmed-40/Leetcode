class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        bst_buy=prices[0]
        max_profit=0
        i=1
        while i <len(prices):
           if(prices[i]>bst_buy):
               max_profit=max(max_profit,prices[i]-bst_buy)
           bst_buy=min(prices[i],bst_buy)
           i+=1
        return max_profit
            