# cook your dish here
t = int(input())
for _ in range(t):
    n = int(input())
    l = [int(x) for x in input().split()]
    cnt = 0
    for i in range(0,n-1):
        for j in range(i+1,n):
            if int(l[i]^l[j])>max(l[i], l[j]):
                cnt+=1
    print(cnt)