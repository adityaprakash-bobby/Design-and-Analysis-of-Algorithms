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

void insertionsort(int a[],int size)
{
    int i,j;
    int temp;
    for(i=1;i<size;i++)
    {
        temp=a[i];
        j=i-1;
        while( a[j]>temp && j>=0 )
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}

int main()
{
	int a[40],n;
	cout<<"Enter the size:";
	cin>>n;
	input(a,n);

	insertionsort(a,n);
	display(a,n);
	return 0;
}