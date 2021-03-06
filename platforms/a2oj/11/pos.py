n = int(input())
a = input().split()
d = {}
for i in range(n):
        d[a[i]] = i
m = int(input())
b = input().split()
x = 0
y = 0
for i in range(m):
        x += d[b[i]] + 1
        y += n - d[b[i]]
print(x, y)
