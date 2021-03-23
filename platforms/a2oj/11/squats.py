n = int(input())
str = input()
lower=0
for i in str:
    if i.islower():
        lower+=1
if n//2==lower:
    print("0\n",str)
elif lower>n//2:
    print(lower-n//2)
    newstr=""
    for i in str:
        if i.islower() and lower != n//2:
            newstr+=i.upper()
            lower-=1
        else:
            newstr+=i
    print(newstr)
elif lower<n//2:
    print(n//2-lower)
    newstr=""
    for i in str:
        if i.isupper() and lower != n//2:
            newstr+=i.lower()
            lower+=1
        else:
            newstr+=i
    print(newstr)
