# cook your dish here
for _ in range(int(input())):
    n = int(input())
    l = [int(x) for x in input().split()]

    if n==7:
        print("7")
    else:
        cnt = 0
        r = set()
        for each in l:
            if each<8:
                r.add(each)
            cnt+=1
            if(len(r)==7):
                break
        print(cnt)
