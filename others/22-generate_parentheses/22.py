class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        res = []
        def dfs(s, openings, closings):
            if (openings == closings) and (openings + closings == 2 * n):
                res.append(s)
                return
            if (openings < n):
                dfs(s+"(",openings+1, closings)
            if (openings > closings):
                dfs(s+")",openings, closings +1)

        dfs("",0,0)
        return res

if __name__ == "__main__":
    soln = Solution()
    for i in range(5):
        print(soln.generateParenthesis(i))
