1class Solution:
2    def strongPasswordCheckerII(self, p: str) -> bool:
3        if len(p) < 8:
4            return False
5
6        lower = upper = digit = special = False
7        specials = "!@#$%^&*()-+"
8
9        for i in range(len(p)):
10            if i > 0 and p[i] == p[i - 1]:
11                return False
12            if p[i].islower():
13                lower = True
14            elif p[i].isupper():
15                upper = True
16            elif p[i].isdigit():
17                digit = True
18            elif p[i] in specials:
19                special = True
20
21        return lower and upper and digit and special
22        