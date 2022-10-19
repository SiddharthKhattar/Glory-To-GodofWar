class Solution:
    def maxProfit(self, prices: List[int]):
        l,r = 0,1
        maxP = 0
# Left pointer is to buy stock and Right Pointer is to sell stock        
        while r < len(prices):
            if prices[l] < prices[r]:
                profit = prices[r] - prices[l]
                maxP = max(maxP, profit)
            else:
                l = r
            r += 1
            
        return maxP        
        
# This solution runtime isn't optimal as runtime complexity is O(n)
# The memory complexity is sufficient

