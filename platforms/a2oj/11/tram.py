n = int(input())
max = 0
cur = 0
# For user input
for i in range(n):
    a , b = map(int, input().split())
    if (b-a+cur)>max:
        max=b-a+cur
    cur = b-a+cur
print(max)
