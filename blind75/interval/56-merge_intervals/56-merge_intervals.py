class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x: x[0])
        last = intervals[0]
        res = list()

        for inte in intervals[1:]:
            if last[1] >= inte[0]:
                last[1] = max(inte[1],last[1])
            else:
                res.append(last)
                last = inte
        
        res.append(last)
        return res