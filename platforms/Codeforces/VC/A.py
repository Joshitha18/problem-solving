n,k=map(int,input().split())
a = list(map(int,input().split()))
val = sum(i<=(5-k) for i in a)
print(int(val/3))
