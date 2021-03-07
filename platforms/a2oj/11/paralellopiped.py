s1,s2,s3=map(int,input().split())

a=(int)((s1*s3)//s2)**0.5
b=(int)((s1*s2)//s3)**0.5
c=(int)((s2*s3)//s1)**0.5
print(int(4*(a+b+c)))
