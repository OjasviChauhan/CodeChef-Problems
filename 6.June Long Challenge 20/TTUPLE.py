def check(p,q,r,a,b,c):
    if(p==a and q==b and r==c):     #Case1: for all equal numbers
        return 0
    elif((p==a and q==b and r!=c) or (p==a and q!=b and r==c) or (p!=a and q==b and r==c)): #Case: for any one unequal number
        return 1
    elif(p==a and q!=b and r!=c):    #Case2.a: for any two unequal numbers part a
        if(b-q == c-r):
            return 1
        if(q!=0 and r!=0):
            if(b/q == c/r and (b/q).is_integer()):
                return 1
            else:
                return 2
        else:
            return 2

    elif(p!=a and q==b and r!=c):    #Case2.b: for any two unequal numbers part b
        if(a-p == c-r):
            return 1
        if(p!=0 and r!=0):
            if(a/p == c/r and (a/p).is_integer()):
                return 1
            else:
                return 2
        else:
            return 2

    elif(p!=a and q!=b and r==c):   #Case2.c: for any two unequal numbers part c
        if(a-p == b-q):
            return 1
        if(p!=0 and q!=0):
            if(a/p == b/q and (a/p).is_integer()):
                return 1
            else:
                return 2
        else:
            return 2

    else:                    #Case3: For all unequal numbers
        
        if(p!=0 and q!=0 and r!=0):
            if(a/p == b/q and b/q == c/r and (a/p).is_integer()):        #Case: for all factors being equal
                return 1
            if((a/p==b/q and (a/p).is_integer()) or (a/p==c/r and (a/p).is_integer()) or (b/q==c/r and (b/q).is_integer())):
                return 2

        if(a-p == b-q and b-q == c-r):    #Case3.a: for all difference being equal
            return 1
        elif((a-p == b-q) or (a-p == c-r) or (b-q == c-r)):  #case: where difference of two numbers is equal and third number is unequal to its corresponding number.
            return 2
        
        elif(a==0 and b==c and b!=0):
            return 2
        elif(b==0 and a==c and a!=0):
            return 2
        elif(c==0 and a==b and a!=0):
            return 2

        # +d +d+d1 +d1        
        elif(a+c+q == b+p+r):
            #print("+d +d+d1 +d1")
            return 2
        elif(a+b+r == p+q+c):
            #print("+d +d+d1 +d1")
            return 2
        elif(a+r+q == b+p+c):
            #print("+d +d+d1 +d1")
            return 2
        
        # *d *d*d1 *d1
        elif(a*c*q == b*p*r and a*c*q != 0):
            #print("*d *d*d1 *d1")
            return 2
        elif(a*b*r == p*q*c and a*b*r != 0):
            #print("*d *d*d1 *d1")
            return 2
        elif(a*r*q == b*p*c and a*r*q != 0):
            #print("*d *d*d1 *d1")
            return 2

        # 2 multiply then 2 add
        elif(p*(c-r) == p*b - a*q and p*(c-r)!=0):
            #print("2 multiply then 2 add1")
            return 2
        elif(p*(b-q) == p*c - a*r and p*(b-q)!=0):
            #print("2 multiply then 2 add2")
            return 2
        elif(q*(c-r) == q*a - b*p and q*(c-r)!= 0):
            #print("2 multiply then 2 add3") 
            return 2
        elif(q*(a-p) == q*c - b*r and q*(a-p)!=0):
            #print("2 multiply then 2 add4")
            return 2
        elif(r*(b-q) == r*a - c*p and r*(b-q)!=0):
            #print("2 multiply then 2 add5")
            return 2
        elif(r*(a-p) == r*b - c*q and r*(a-p)!=0):
            #print("2 multiply then 2 add6")
            return 2
        
        # 2 add then 2 multiply
        elif(c*(q+a-p) == r*b and r*b!=0):
            #print("2 add then 2 multiply")
            return 2
        elif(b*(r+a-p) == c*q and c*q!=0):
            #print("2 add then 2 multiply")
            return 2
        elif(c*(p+b-q) == r*a and r*a!=0):
            #print("2 add then 2 multiply")
            return 2
        elif(a*(r+b-q) == p*c and p*c!=0):
            #print("2 add then 2 multiply")
            return 2
        elif(b*(p+c-r) == a*q and a*q!=0):
            #print("2 add then 2 multiply")
            return 2
        elif(a*(q+c-r) == p*b and p*b!=0):
            #print("2 add then 2 multiply")
            return 2

        # 2 multiply then 3 add
        elif(q*(a+r-c) + p*(c-r) == p*b and p*b!=0):
            #print("2 multiply then 3 add1")
            return 2
        elif(q*(c+p-a) + r*(a-p) == r*b and r*b!=0):
            #print("2 multiply then 3 add2")
            return 2
        elif(p*(c+q-b) + r*(b-q) == r*a and r*a!=0):
            #print("2 multiply then 3 add3")
            return 2

        # 3 add then 2 multiply
        elif(c*(q+a-p) == b*(r+a-p) and c*(q+a-p)!=0):
            #print("3 add then 2 multiply")
            return 2
        elif(a*(q+c-r) == b*(p+c-r) and a*(q+c-r)!=0):
            #print("3 add then 2 multiply")
            return 2
        elif(a*(r+b-q) == c*(p+b-q) and a*(r+b-q)!=0):
            #print("3 add then 2 multiply")
            return 2

        # 3 multiply then 3 add OR 3 add then 3 multiply
        elif(a*(r-q) + b*(p-r) == c*(p-q) and c*(p-q)!=0):
            #print("3 multiply then 3 add OR 3 add then 3 multiply")
            return 2

        # 2 add then 3 multiply OR 3 multiply then 2 add
        elif(r*(b-a) == c*(q-p) and r*(b-a)!=0):
            #print("2 add then 3 multiply OR 3 multiply then 2 add")
            return 2
        elif(p*(c-b) == a*(r-q) and p*(c-b) != 0):
            #print("2 add then 3 multiply OR 3 multiply then 2 add")
            return 2
        elif(q*(c-a) == b*(r-p) and q*(c-a)!=0):
            #print("2 add then 3 multiply OR 3 multiply then 2 add")
            return 2

        else:
            return 3    

t = int(input())
for _ in range(t):
    p,q,r = map(int,input().split())
    a,b,c = map(int,input().split())
    print(check(p,q,r,a,b,c))
