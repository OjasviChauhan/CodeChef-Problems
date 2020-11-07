def solve(A):
	counts={}
	
	# for the first element
	count=0
	for i in range(1,len(A)):
		if A[i]<A[0]:
			count+=1
	counts[1]=count+1

	# for middle elements
	for i in range(1,len(A)-1):
		left_array = A[:i]
		right_array = A[i+1:]

		if sorted(left_array)[-1] > A[i]:
			S={}
			for j in range(0,len(left_array)):
				if left_array[j] > A[i]:
					S[j+1] = left_array[j]	

			# checking in right array that how many elements 
			# can get surpassed by elements in left array
			new = S.copy()
			for value in new.values():
				for j in range(0,len(right_array)):
					if value > right_array[j]:
						S[len(left_array)+2+j]=right_array[j]

			counts[i+1] = len(S)+1
			
		else:
			S1={}
			for j in range(0,len(right_array)):
				if right_array[j]<A[i]:
					S1[len(left_array)+2+j]=right_array[j]

			# checking in left array that how many elements 
			# can surpass in right array		
			for ele in right_array:
				for j in range(0,len(left_array)):
					if left_array[j]>ele:
						S1[j+1]=left_array[j]

			counts[i+1]=len(S1)+1

	# for last element
	count=0
	for i in range(0,len(A)-1):
		if A[i]>A[-1]:
			count+=1
	counts[len(A)]=count+1

	for x in counts.items():
		print(x)

	ans = sorted(counts.values())
	print(ans[0],ans[-1])

t=int(input())
for _ in range(t):
    n = int(input())
    A = list(map(int,input().split()))
    solve(A)
