n = int(input())
a = list(map(int,input().strip().split()))[:n]

maxpos = a.index(max(a))
a.reverse()
minpos = a.index(min(a))

if len(a)-minpos-1 < maxpos:
    print(maxpos-1+minpos)
else :
    print(maxpos+minpos)
