from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = 0
        sell = 1
        n = len(prices)
        profit = 0
        while sell < n:
            if prices[sell] < prices[buy]:
                buy = sell
                sell += 1
            elif profit < (prices[sell] - prices[buy]):
                profit = prices[sell] - prices[buy]
                sell += 1
            else:
                sell += 1
        return profit
    
def test_sol():
    sol = Solution()
    
    # Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
    # Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
    prices = [7,1,5,3,6,4]
    expected = 5
    result = sol.maxProfit(prices)
    print(f'Test case 1: {result == expected}, Output: {result}')
    
    # Explanation: In this case, no transactions are done and the max profit = 0.
    prices = [7,6,4,3,1]
    expected = 0
    result = sol.maxProfit(prices)
    print(f'Test case 2: {result == expected}, Output: {result}')
    
   
test_sol()

