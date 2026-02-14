1class Solution:
2    def findGCD(self, nums: List[int]) -> int:
3        def gcd(a, b):
4            if b == 0:
5                return a
6            return gcd(b, a % b)
7        mn = min(nums)
8        mx = max(nums)
9        return gcd(mn, mx)