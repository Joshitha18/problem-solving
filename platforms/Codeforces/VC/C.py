m,n = map(int,input().split())
a = list(map(int,input().split()))
i = 0
sum = 0
while(True):
    sum = i+a[i]
    i = sum
    if(i==n-1):
        print("YES")
        break
    elif(i>=n):
        print("NO")
        break
