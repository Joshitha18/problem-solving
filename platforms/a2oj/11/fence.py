n,k=map(int,input().split())
a = list(map(int,input().split()))
min = 0
note=1
for i in range(k):
    min+=a[i]
for i in range(k,n):
    if a[i]<a[i-k]:
        min=a[i]-a[i-k]+min
        note=i-k+2
print(note)
