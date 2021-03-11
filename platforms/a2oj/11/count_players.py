a = input()
count = 0
for i in range(1,len(a)):
    if (a[i-1]==a[i]):
         count += 1
         if(count==6):
             print("YES")
             break
    else:
        count = 0
if (count<6):
    print("NO")
