n = int(input())
x, y, z = 0,0,0
while n>0:
        x_cord, y_cord, z_cord = map(int, input().split())
        x += x_cord; y += y_cord; z += z_cord
        n -= 1

if (x==0 and y==0 and z==0):
       print("YES")
else:
       print("NO")
