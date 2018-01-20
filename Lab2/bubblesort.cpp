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

void bubblesort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
}

int main()
{
	int a[40],n;
	cout<<"Enter the size:";
	cin>>n;
	input(a,n);
	bubblesort(a,n);
	display(a,n);
	return 0;
}