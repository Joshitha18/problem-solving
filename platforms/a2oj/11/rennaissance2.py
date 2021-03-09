n = int(input())
h = list(map(int, input().split()))
a = [abs(h[i] - h[(i+1)%n]) for i in range(n)]
print(a.index(min(a)) + 1, (a.index(min(a)) + 1)%n +1)
