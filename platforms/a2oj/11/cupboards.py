matrix = []
n = int(input())
# For user input
for i in range(n):
    a = list(map(int, input().split()))
    matrix.append(a)

result = []
for i in range(2):
    result.append(sum([row[i] for row in matrix]))

print(min(result[0], n-result[0]) + min(result[1], n - result[1]))
