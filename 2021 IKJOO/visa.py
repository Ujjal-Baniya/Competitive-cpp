# cook your dish here
for _ in range(int(input())):
    x1, x2, y1, y2, z1, z2 = [int(x) for x in input().split()]
    if(x2>=x1 and y2>=y1 and z1>=z2):
        print("YES")
    else:
        print("NO")
