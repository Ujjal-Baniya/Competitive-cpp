t = int(input())
for _ in range(t):
    n, a, b, h = [int(x) for x in input().split()]
    s = input()
    c = s.count('0')
    d = n - c   
    ans = 0
    if c*a<=(c*h+c*b):
        ans += c*a
    else:
        ans +=(c*h+c*b)
    if d*b<=(d*h+d*a):
        ans += d*b
    else:
        ans +=(d*h+d*a)
    print(ans)