t = int(input())
for _ in range(t):
	s = input()
	p = input()
	
	for ele in p:
		s = s.replace(ele,'',1)

	s = ''.join(sorted(s))

	i = 0
	while(ord(s[i]) < ord(p[0])):
		i += 1

	q = s[i:]

	length = len(q)
	Str = '}'
	for j in range(0,length+1):
		ans = q[:j] + p + q[j:]
		Str = min(Str, ans)

	print(s[:i] + Str)
