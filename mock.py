t = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
d = {}
for each in t:
    d[each] = 0
n =int(input())
for _ in range(int(n*(n-1)/2)):
    s = input().split() 
    if(s[2][0]>s[2][2]):
        d[s[0]] += 3
    elif(s[2][0]<s[2][2]):
        d[s[1]] += 3 
    else:
        d[s[1]] +=1
        d[s[0]] +=1

m = max(d.values())
for each in d.keys():
    if(d[each]==m):
        print(each)
print(m)