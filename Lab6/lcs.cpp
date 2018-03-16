#include<bits/stdc++.h>

using namespace std;

int lcs(char *x, char *y, int m, int n)
{
	int c[m+1][n+1];
	int i,j;
	int temp;
		
	for(i=0;i<=m;i++)
		for(j=0;j<=n;j++)
		{	
			if(i==0 || j==0)
				c[i][j] = 0;
			else if(x[i-1] == y[j-1])
				c[i][j] = c[i-1][j-1] + 1;
			else 
				c[i][j] = max(c[i-1][j],c[i][j-1]);
		}

	temp = c[m][n];
	char print[temp+1];
	print[temp]='\0';

	i = m;
	j = n;
   	while (i > 0 && j > 0)
   	{
		if (x[i-1] == y[j-1])
		{
			print[temp-1] = x[i-1]; 
			i--;
			j--;
			temp--;
		}
 
     
		else if (c[i-1][j] > c[i][j-1])
			i--;
		else
			j--;
   	}
 
    cout<<"LCS("<<x<<","<<y<<") = "<<print<<endl;
			
	return c[m][n];
}

int main()
{
	char X[] = "ABCBDABA";
	char Y[] = "BDCABAA";
  
	int m = strlen(X);
	int n = strlen(Y);
  
	cout<<"maxSubsequenceLength = "<<lcs(X,Y,m,n)<<endl;
 
	return 0;
}
