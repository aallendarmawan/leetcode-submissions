class Solution:
    def coinChange(self, coins: list[int], amount: int) -> int:
        maximum_amount = amount + 1
        dp = [maximum_amount] * (amount + 1)
        dp[0] = 0
        
        for i in range(1, amount + 1):
            for coin in coins:
                if i - coin >= 0:
                    dp[i] = min(dp[i], 1 + dp[i - coin])
                    
        return dp[amount] if dp[amount] != maximum_amount else -1