for _ in range(int(input())):
    n = input()
    x = int(n[0])>1
    if x:
        print("1"+n)
    else:
        print(n[0]+"0"+n[1:])
        