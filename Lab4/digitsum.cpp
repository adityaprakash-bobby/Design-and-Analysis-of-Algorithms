#include<bits/stdc++.h>

using namespace std;

int digitsum(int n)
{	
	int i;
	if(n==0)
		return 0;
	i=n/10;
	n=n%10;
	return n + digitsum(i);
}

int main()
{
	int n;
	int res;

	cout<<"Enter number to find sum of digits:";
	cin>>n;

	res=digitsum(n);
	cout<<"Sum of digits="<<res<<endl;

	return 0;
}