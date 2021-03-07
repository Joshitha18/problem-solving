n,k= [int(x) for x in input().split()]
if k<=((n+1)/2):
  print(2*k-1)
else:
  print(int(2*(k-int((n+1)/2))))
