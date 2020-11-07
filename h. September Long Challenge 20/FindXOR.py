t = int(input())
for i in range(22):
    a=[0]*i
a[0] = 1 
for i in range (1,21):
    a[i] = 2 * a[i-1]
for _ in range(t):
    n = int(input())
    print(1," ",a[20])
    sum1 = int(input())
    temp = a[20]*n
    sum1 = sum1 - temp 
    tofind = 0 
    if ( sum1 % 2 == 1 ):
        tofind = tofind + 1
    for i in range (1,20):
        print(1," ",a[i])
        givesum = int(input())
        if (((sum1 + (a[i]*n) - givesum)/(a[i]*2))%2 == 1 ):
            tofind = tofind + a[i]
    print(2," ",tofind)
    out = int(input())