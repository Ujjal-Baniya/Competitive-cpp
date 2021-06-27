# cook your dish here
x = int(input())
for _ in range(x):
    a,b,x = [int(x) for x in input().split()]
    print(int((b-a)/x))