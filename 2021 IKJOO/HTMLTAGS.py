# cook your dish here
for _ in range(int(input())):
    l = input()
    ans = True
    if len(l)<=3:
        ans = False
    elif(l[0]=="<" and l[1]=="/" and l[len(l)-1]==">"):
        for i in range(2,len(l)-1):
            if l[i].isdigit():
                continue
            elif l[i].islower():
                continue
            else:
                ans = False
                break
    else:
        ans = False
    
    if ans==True:
        print("Success")
    else:
        print("Error")
        