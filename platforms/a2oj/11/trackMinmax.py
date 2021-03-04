n = int(input())

a = list(map(int, input().split()))
min = a[0]
max = a[0]
count = 0
for i in range(1,n):
    if a[i]>max:
        count += 1
        max = a[i]
    elif (a[i]<min):
        count += 1
        min = a[i]
print(count)
