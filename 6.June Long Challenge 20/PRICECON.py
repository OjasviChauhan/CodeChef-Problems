t = int(input())
for _ in range(t):
    n,k = map(int,input().split())
    l = list(map(int,input().split()))
    count = 0
    for i in range(n):
        if(l[i] > k):
            count += (l[i] - k)
    print (count)
