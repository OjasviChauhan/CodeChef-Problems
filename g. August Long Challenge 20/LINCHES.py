def solve(n,k,A):
	Dict = {}
	for i in range(0,n):
		if (A[i] == k):
			return A[i]
		if (A[i] < k and k%A[i] == 0):
			Dict[A[i]] = k/A[i]

	empty = not bool(Dict) 
	if(not empty):		
		Dict = sorted(Dict.items(), key = lambda kv:(kv[1], kv[0]))
		return Dict[0][0]
	if(empty):
		return -1

t = int(input())
for _ in range(t):
	n,k = map(int,input().split())
	A = []
	A = list(map(int, input().split()))
	print(solve(n,k,A))
