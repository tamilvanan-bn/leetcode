1class Solution:
2    def longestNiceSubarray(self, nums: List[int]) -> int:
3        n = len(nums)
4        set_bits = j = res = 0
5        for i in range(n):
6            while set_bits & nums[i]:
7                # do xor to remove the set bits of the numbers that doesn't match the condition
8                set_bits ^= nums[j]
9                j += 1
10            # do or with the current number which matches the condition
11            set_bits |= nums[i]
12            res = max(res, i - j + 1)
13        return res