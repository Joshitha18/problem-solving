n=int(input())
s=sorted(input())
x=s[::n]*n
if sorted(x)==s:
        print("".join(x))
else:
        print(-1)
