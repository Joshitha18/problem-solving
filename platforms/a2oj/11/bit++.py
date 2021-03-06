n=int(input())
X=0
for i in range(n):
      a=input()
      if a=="X++" or a=="++X":
        X+=1
      else:
        X-=1
print(X)
