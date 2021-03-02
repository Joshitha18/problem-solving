size = int(input())
string = input()
count = 0

for i in range(size-1):
    if string[i] == string[i+1]:
        count += 1
    else:
        flag = 0

print(count)
