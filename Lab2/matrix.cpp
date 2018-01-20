#include<bits/stdc++.h>

using namespace std;

void matrix_mul(int a[][40],int b[][40],int m) //only for identical square matrix
{
	int i,j,k;
	int c[40][40];

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			c[i][j]=0;
			for(k=0;k<m;k++)
				c[i][j]=c[i][j] + a[i][k]*b[k][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
			cout<<c[i][j]<<"  ";
		cout<<endl;
	}
}

int main()
{
	int n,a[40][40],b[40][40],i,j;
	cout<<"Enter size of the square matrix:"<<endl;
	cin>>n;

	cout<<"Enter elements into A:";
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	

	cout<<"Enter elements into B:";
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>b[i][j];	

	matrix_mul(a,b,n);
	return 0;
}