for _ in range(t):
    s = input()
    a = 0
    b = 0
    ans = 0
    for each in s:
        if each =="(":
            a += 1
        elif each =="[":
            b +=1
        elif each == ")" and a!=0:
            a -= 1
            ans +=1
        elif each == "]" and b!=0:
            b -= 1
            ans += 1
    
    print(ans)