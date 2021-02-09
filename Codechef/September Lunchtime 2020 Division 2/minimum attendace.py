# cook your dish here
import math
t = int(input())
for _ in range(t):
    n = int(input())
    s = input()
    present = s.count('1') + 120 - n
    att = int(math.floor(present*100/120))
    if att>=75:
        print("YES")
    else:
        print("NO")