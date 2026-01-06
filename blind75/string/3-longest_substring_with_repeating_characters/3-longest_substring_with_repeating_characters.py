class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0
        res = 0
        seen_before = set()
        n = len(s)

        for r in range(n):
            while s[r] in seen_before:
                seen_before.remove(s[l])
                l += 1
            seen_before.add(s[r])
            res = max(res, r - l+1)
        
        return res
