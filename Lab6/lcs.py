def lcs( x, y):
	m = len(x)
	n = len(y)	
	
	c = [[None]*(n+1) for i in xrange(m+1)]
	
	for i in range(m+1) :
		for j in range(n+1) :
			if i == 0 or j == 0 :
				c[i][j] = 0
			elif x[i-1] == y[j-1] :
				c[i][j] = c[i-1][j-1] + 1
			else :
				c[i][j] = max(c[i-1][j], c[i][j-1])
	
	return c[m][n]

X = "AGGTAB"
Y = "GXTXAYB"

print 'Length of LCS is', lcs(X,Y)

