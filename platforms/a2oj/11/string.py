n = int(input())
for i in range(n):
    string = input()
    if len(string)>10:
        print(str(string[0])+str(len(string)-2)+str(string[-1]))
    else:
        print(string)
