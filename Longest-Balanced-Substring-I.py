1class Solution:
2    def longestBalanced(self, s: str) -> int:
3        n, res = len(s), 0
4        for i in range(n):
5            fm = defaultdict(int)
6            for j in range(i, n):
7                fm[s[j]] += 1
8                if len(set(fm.values())) == 1:
9                    res = max(res, j - i + 1)
10        return res
11
12        