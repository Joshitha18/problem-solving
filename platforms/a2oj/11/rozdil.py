n = int(input())
s = list(map(int, input().split()))
t = min(s)
if s.count(t) > 1:
        print("Still Rozdil")
else:
        print(s.index(t) + 1)
