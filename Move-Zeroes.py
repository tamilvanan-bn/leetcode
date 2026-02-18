1class Solution:
2    def moveZeroes(self, nums: List[int]) -> None:
3        """
4        Do not return anything, modify nums in-place instead.
5        """
6        n, j = len(nums), -1
7        for i in range(n):
8            if nums[i] == 0:
9                j = i
10                break
11        if j != -1:
12            for i in range(j + 1, n):
13                if nums[i] != 0:
14                    nums[i], nums[j] = nums[j], nums[i]
15                    j += 1
16        