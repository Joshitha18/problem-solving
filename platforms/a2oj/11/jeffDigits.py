n=int(input())
list1=list(map(int,input().split()))
five=list1.count(5)
zero=list1.count(0)
if zero==0:
    print(-1)
else:
    while not (five*5)%9==0:
        five-=1
    strx=''
    strx+='5'*five+'0'*zero

    print(int(strx))
