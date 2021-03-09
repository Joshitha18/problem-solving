n, a = int(input()), [int(i) for i in input().split()]
m, b = int(input()), [int(i) for i in input().split()]
l = [j // i for j in b for i in a if not j % i]
print(l.count(max(l)))
