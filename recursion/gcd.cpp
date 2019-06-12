#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
	if(a==0)
		return b;
	else if(b==0)
		return a;

	if(a>b)
		return gcd(b,a-b);
	else
		return gcd(a,b-a);

}

int main()
{
	int n,m;
	cout<<"Enter numbers to find gcd:";
	cin>>n>>m;

	cout<<"gcd("<<m<<","<<n<<")="<<gcd(m,n)<<endl;

	return 0;
}