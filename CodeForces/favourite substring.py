# cook your dish here
t = int(input())
for _ in range(t):
    n = int(input())
    l = [int(x) for x in input().split()]
    for i in range(int(n/2)):
        print(l[i],l[n-i-1],end=" ")
    if n%2!=0:
        print(l[int(n/2)])
    else:
        print("")
            
        