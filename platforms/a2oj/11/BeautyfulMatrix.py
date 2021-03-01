list=[]
for i in range(5):
    matrix = input().split()
    list.append(matrix)
    for j in range(0,5):
      if list[i][j]=="1":
        print(abs(i-2)+abs(j-2))
