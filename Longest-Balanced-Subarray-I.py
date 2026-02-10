1class Solution:
2    def longestBalanced(self, nums: List[int]) -> int:
3        res, n = 0, len(nums)
4        for i in range(n):
5            odd, even = set(), set()
6            for j in range(i, n):
7                if nums[j] & 1:
8                    odd.add(nums[j])
9                else:
10                    even.add(nums[j])
11                if len(odd) == len(even):
12                    res = max(res, j - i + 1)
13        return res