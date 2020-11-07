def check(s):
    if(s[0] != s[1]):
        return True
    else:
        return False

t = int(input())
for _ in range(t):
    s = input()
    i,count = 0,0
    while(i <= len(s)-2):
        if(check(s[i:i+2])):
            count += 1
            i += 2
        else:
            i += 1
    print(count)
