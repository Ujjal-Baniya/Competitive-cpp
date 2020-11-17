t = int(input())
for _ in range(t):
    n, k = [int(x) for x in input().split()]
    l = [int(x) for x in input().split()]
    g = int(n/2)+1
    ans = 0 
    j = n*k - g
    for i in range(k):
        ans += l[j]
        j -= g
    print(ans)
        