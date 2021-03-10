m,s=map(int,input().split())
if (s==0):
    if(m==1):
        print("0 0")
    else:
        print("-1 -1")
else:
    mini=""
    maxi=""
    for i in range(m):
        maxi+=str(min(9,s))
        s-=min(9,s)
    if s>0:
        print("-1 -1")
    else:
        mini=maxi[::-1]
        j=0
        while mini[j]=='0':
            j+=1
        new = list(map(int,mini))
        new[0]+=1
        new[j]-=1
        mini = "".join(map(str,new))

        print(mini+" "+maxi)
