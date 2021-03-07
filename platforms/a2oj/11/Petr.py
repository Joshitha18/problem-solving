n=int(input())
li=list(map(int,input().split()))
i=0
while(n>0):
        i=(i%7)+1
        n=n-li[i-1]
print(i)
