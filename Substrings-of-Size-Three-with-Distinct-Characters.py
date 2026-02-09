1class Solution:
2    def countGoodSubstrings(self, s: str) -> int:
3        res, n = 0, len(s)
4        for i in range(n - 2):
5            if s[i] != s[i+1] and s[i+1] !=s [i+2] and s[i+2] != s[i]:
6                res += 1
7        return res
8
9        