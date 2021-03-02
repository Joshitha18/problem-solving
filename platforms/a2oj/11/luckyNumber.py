num = input()
sum = 0
for digit in str(num):
    if (digit == '4' or digit == '7'):
        sum += 1
if (sum == 7 or sum == 4):
    print("YES")
else :
    print("NO")
