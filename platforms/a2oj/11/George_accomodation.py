n=int(input())
count=0
for x in range(n):
    p,q=map(int,input().split())
    if (q-p)>=2:
        count+=1

print(count)
