1class Solution:
2    def numOfSubarrays(self, nums: List[int], k: int, t: int) -> int:
3        n = len(nums)
4        run, res = sum(nums[:k]), 0
5        if run // k >= t:
6            res += 1
7        for i in range(k, n):
8            run += nums[i] - nums[i - k]
9            if run // k >= t:
10                res += 1
11        return res
12
13        