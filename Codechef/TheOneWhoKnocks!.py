# cook your dish here
t =int(input())
for _ in range(t):
    x, y = [int(i) for i in input().split()]
    if x == y:
        print("0")
    elif x > y:
        if (x-y)%2==0:
            print("1")
        else:
            print("2")
    elif x<y:
        if (y-x)%2!=0:
            print("1")
        else:
            if ((y-x)/2)%2!=0:
                print("2")
            else:
                print("3")