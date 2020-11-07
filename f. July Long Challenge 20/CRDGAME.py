t = int(input())
for _ in range(t):
	n = int(input())
	count1,count2 = 0,0
	for i in range(n):
		a,b = input().split()
		sum1,sum2 = 0,0
		for e in a:
			sum1 += int(e)
		for e in b:
			sum2 += int(e)
		if sum1 > sum2:
			count1 += 1
		elif sum1 < sum2:
			count2 += 1
		else:
			count1 += 1
			count2 += 1
	if count1 > count2:
		print(0,count1,sep=" ")
	elif count1 < count2:
		print(1,count2,sep=" ")
	else:
		print(2,count1,sep=" ")
