1class Solution:
2    def reverseBits(self, n: int) -> int:
3        result = 0
4        for i in range(32):
5            result <<= 1
6            result |= n & 1
7            n >>= 1
8        return result