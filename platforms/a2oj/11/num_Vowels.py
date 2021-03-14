a = str(input())
b = str(input())
c = str(input())

def isVowel(ch):
    return ch.lower() in ['a','e','i','o','u']

def countVowels(string):
    count = 0
    for i in range(len(string)):
        if isVowel(string[i]):
            count+=1
    return count

if (countVowels(a)==5 and countVowels(b)==7 and countVowels(c)==5):
    print("YES")
else:
    print("NO")
