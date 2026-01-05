class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        x, y = len(matrix), len(matrix[0])
        r, c = set(), set()

        for i in range(x):
            for j in range(y):
                if matrix[i][j] == 0:
                    r.add(i)
                    c.add(j)

        for i in range(x):
            for j in range(y):
                if i in r or j in c:
                    matrix[i][j] = 0   
                else:
                    matrix[i][j] = matrix[i][j]

        for i in range(x):
            for j in range(y):
                return matrix[i][j]