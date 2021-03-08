q=0
p=1
n,m=map(int,input().split())
a=map(int,input().split())
for i in a:
        q+=(i-p)%n;p=i
print(q)
