#include<bits/stdc++.h>

using namespace std;

int fibo(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibo(n-1)+fibo(n-2);

}

int main()
{
	int i,n;
	int res;

	cout<<"Enter the number of elements in the fibonacci series:";
	cin>>n;

	for(i=0;i<n;i++)
		cout<<fibo(i)<<" , ";
	cout<<endl;

	return 0;
}