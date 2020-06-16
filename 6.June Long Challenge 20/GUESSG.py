def swapLie(flag):
    if(flag == "Lie"):
        flag = "truth"
    else:
        flag = "Lie"
    return flag

n = int(input())
l,r = 1,n

print(1)
res = input()
if(res == 'L'):
    l += 1
    flag = "Lie"
    while(True):
        flag = swapLie(flag)
        mid = (l+r)//2
        print(mid)
        res = input()   
        if(res == 'G' and flag == 'truth'):
            l = mid + 1
        elif(res == 'L' and flag == 'truth'):
            r = mid - 1
        elif(res == 'E'): 
            break
        else:
            continue

elif(res == 'G'):
    l += 1    
    flag = "truth"
    while(True):
        flag = swapLie(flag)
        mid = (l+r)//2
        print(mid)
        res = input()
        if(res == 'G' and flag == 'truth'):
            l = mid + 1
        elif(res == 'L' and flag == 'truth'):
            r = mid - 1
        elif(res == 'E'): 
            break
        else:
            continue
