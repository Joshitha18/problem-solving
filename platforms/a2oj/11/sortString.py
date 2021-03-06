host = str(input())
guest =str(input())
pile = str(input())
pile = sorted(pile)
total = sorted(host+guest)
if pile == total:
    print("YES")
else:
    print("NO")
