t = int(input())
for _ in range(t):
    n = int(input())
    l = list(map(int,input().split()))
    if(l[0] != 5):
        print("NO")
    else:
        c5 = 1
        c10 = 0
        c15 = 0
        x = 1
        for i in range(1,n):
            if(l[i] == 5):
                c5 += 1
            if(l[i] == 10):
                c10 += 1
                if(c5 == 0):
                    break
                else:
                    c5 -= 1
            if(l[i] == 15):
                c15 += 1
                if(c5 < 2 and c10 < 1):
                    break
                elif(c5 >= 2 and c10 < 1):
                    c5 -= 2
                else:
                    c10 -= 1
            x += 1
        
        if(x == n):
            print("YES") 
        else:
            print("NO")