t = int(input())
while t>0 :
    t-=1
    n= int(input())
    maxi=0
    mini=1000000
    a =input().split()
    for i in range(n):
        x= int(a[i])
        maxi=max(maxi,x)
        mini=min(mini,x)
    print((maxi-mini)*(n-1)) 