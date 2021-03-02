string = input()
lower = sum(map(str.islower, string))
if len(string)-lower > len(string)/2:
    print(string.upper())
else:
    print(string.lower())
