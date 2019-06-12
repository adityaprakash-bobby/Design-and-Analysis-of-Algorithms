#include<bits/stdc++.h>

using namespace std;

int factorial(int n)
{	
	int i=n;

	if(n==0)
		return 1;

	return i*factorial(n-1);
}

int main()
{
	int n;
	int res;

	cout<<"Enter number to find factorial:";
	cin>>n;

	res=factorial(n);
	cout<<n<<"!="<<res<<endl;

	return 0;
}