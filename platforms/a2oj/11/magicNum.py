s=input()
k=0
while k<len(s):
    if s[k:k+3]=='144':k=k+3
    elif s[k:k+2]=='14':k=k+2
    elif s[k:k+1]=='1':k=k+1
    else:print('NO');exit()
print("YES")
