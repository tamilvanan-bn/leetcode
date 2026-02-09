1class Solution:
2    def validIPAddress(self, q: str) -> str:
3        def check_v4():
4            qry = q.split(".")
5            if len(qry) != 4:
6                return "Neither"
7            else:
8                for i in qry:
9                    if i == "":
10                        return "Neither"
11                    if i[0] == "0" and len(i) > 1:
12                        return "Neither"
13                    elif i.isnumeric() and int(i) > 255:
14                        # i < 0 check is unnecessay as i.isnumeric() never returns -ve
15                        return "Neither"
16                    elif not i.isnumeric():
17                        return "Neither"
18            return "IPv4"
19
20        def check_v6():
21            def is_hex(s):
22                try:
23                    int(s, 16)
24                    return True
25                except ValueError:
26                    return False
27
28            qry = q.split(":")
29            if len(qry) != 8:
30                return "Neither"
31            
32            for i in qry:
33                if i == "" or len(i) > 4 or not is_hex(i):
34                    print(i)
35                    return "Neither"
36            return "IPv6"
37
38        if "." in q:
39            return check_v4()
40        elif ":" in q:
41            return check_v6()
42        else:
43            return "Neither"
44