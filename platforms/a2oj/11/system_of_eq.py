n,m=map(int,input().split())
i=0
c=0
while(i*i<=n):
        if((m-i)==(n-i*i)**2):
            c+=1
        i+=1
print(c)
