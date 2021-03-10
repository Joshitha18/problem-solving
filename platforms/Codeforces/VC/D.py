a = list(map(int,input().split()))

if (a[3]<a[1]*a[2]):
    if(a[2]*(a[0]%a[1])>a[3]):
        print(int(a[0]/a[1])*a[3]+a[3])
    else:
        print(int(a[0]/a[1])*a[3]+a[2]*(a[0]%a[1]))
else:
    print(a[0]*a[2])
