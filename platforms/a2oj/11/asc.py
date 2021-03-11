n= int(input())
if n==1:
    print("1")
else:
    array = [x for x in range(1, n)]
    array = [n] + array
    print(*array)
