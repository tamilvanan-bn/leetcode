1class Solution:
2    def lengthOfLongestSubstring(self, s: str) -> int:
3        n, res = len(s), 0
4        hm = [-1 for _ in range(1, 257)]
5        l = r = 0
6        while r < n:
7            if hm[ord(s[r])] != -1:
8                if hm[ord(s[r])] >= l:
9                    l = hm[ord(s[r])] + 1
10            ln = r - l + 1
11            res = max(res, ln)
12            hm[ord(s[r])] = r
13            r += 1
14        return res
15            