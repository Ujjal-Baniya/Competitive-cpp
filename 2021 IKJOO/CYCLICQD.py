# cook your dish here
for _ in range(int(input())):
    A,B,C,D = [int(x) for x in input().split()]
    if A+C==180 and B+D==180:
        print("YES")
    else:
        print("NO")