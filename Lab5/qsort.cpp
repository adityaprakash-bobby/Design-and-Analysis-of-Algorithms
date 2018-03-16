#include<bits/stdc++.h>

using namespace std;

int partition(int a[],int p,int r)
{
	int x,temp;
	x=a[r];              //'x' is the pivot element
	int i,j;
	i=p-1;
	j=r+1;
	while(1)
	{
	    do
        {
		    i=i+1;
		}while(a[i]<x);
        do
        {
            j=j-1;
        }while(a[j]>x);

        if(i>j)
        	return j;
        else
        {
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
        }

	}
}

void qsort(int a[],int p, int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		qsort(a,p,q);
		qsort(a,q+1,r);
	}
}

int main()
{
	int a[50];
	int n;
	int i;
	
	cout<<"Enter number of elements:"
	cin>>n;    
	
	cout<<"Enter elements:"
	for(i=0;i<n;i++)	// input of elements
		cin>>a[i];	

	qsort(a,0,n-1);

	cout<<"Sorted array:"
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

	cout<<endl;

	return 0;
}
