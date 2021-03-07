n = int(input())

a = sum(list(map(int,input().split())))
count=0
for i in range(1,6):
    if (a+i)%(n+1)!=1:
        count += 1
print(count)
