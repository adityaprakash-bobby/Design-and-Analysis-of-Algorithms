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

void selectionsort(int a[],int n)
{
    int i,j,temp;
    int small;
    small=a[0];
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        {
        small=a[i];
        if(small>a[j])
            {
            a[i]=a[j];
            a[j]=small;
            }

        }
}


int main()
{
	int a[40],n;
	cout<<"Enter the size:";
	cin>>n;
	input(a,n);
	selectionsort(a,n);
	//display(a,n);
	
	if(n%2)
        cout<<a[(n+1)/2];
    else
        cout<<(a[(n-1)/2]+a[(n+1)/2])/2.0;
	
	return 0;
}