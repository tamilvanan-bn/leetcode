1class Solution:
2    def findLucky(self, arr: List[int]) -> int:
3        arr = Counter(arr)
4        mx = -1
5        for i in arr:
6            print(i, arr[i])
7            if i == arr[i]:
8                mx = max(mx, i)
9        return mx
10        