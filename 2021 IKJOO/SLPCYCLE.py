for _ in range(int(input())):
    n, r = [int(x) for x in input().split()]
    l = input()
    cnt = 0
    ans = False
    z = []
    for i in range(n):
        if l[i] == "0":
            cnt += 1
        else:
            z.append(cnt)
            cnt = 0
        if i==n-1:
            z.append(cnt)
    z.sort(reverse=True)
    
    for each in z:
        if each >= r:
            ans = True
            break
        r = 2*(r-each)
    if ans or r==0:
        print("YES")
    else:
        print("NO")