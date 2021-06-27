# cook your dish here
for _ in range(int(input())):
    n = int(input())
    d = {}
    for _ in range(3*n):
        a,b = [x for x in input().split()]
        try:
            if d[a]:
                d[a] += int(b)
        except:
            d[a] = int(b)
            
    l = [int(x) for x in d.values()]
    l.sort()
    print(*l)