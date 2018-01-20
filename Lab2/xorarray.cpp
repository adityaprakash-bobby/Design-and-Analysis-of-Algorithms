#include<iostream>
using namespace std;

void input(int a[],int n)
{

int i;
cout<<"\nEnter the elements:";
for(i=0;i<n;i++)
cin>>a[i];

}

void display(int a[],int n)
{

int i;
cout<<"\nThe array : ";
for(i=0;i<n;i++)
cout<<a[i]<<" ";

}

void xorarray(int a[],int n,int temp)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		a[i]=a[i]^temp;
		//cout<<a[i]<<" ";
	}

	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
}

int main()
{
	int a[40],n,x;
	cout<<"Enter the size:";
	cin>>n;
	input(a,n);
	cout<<"Enter another number:";
	cin>>x;
	xorarray(a,n,x);
	display(a,n);
	return 0;
}