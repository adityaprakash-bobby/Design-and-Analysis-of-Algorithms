#include<bits/stdc++.h>

using namespace std;

void sort_nby2(int a[],int n)
{
	int small,large,temp;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{	
			small=a[i];
			large=a[i];
				if((n/2)>i && a[j]<small)
				{
					a[i]=a[j];
					a[j]=small;
				}	
				if(i>=(n/2) && a[j]>large)
				{
					a[i]=a[j];
					a[j]=large;
				}

		}
	}
}

int main()
{
	int n,a[40],i;
	cout<<"Enter size:"<<endl;
	cin>>n;

	cout<<"Enter elements:";
	for(i=0;i<n;i++)
		cin>>a[i];

	sort_nby2(a,n);

	cout<<"The resultant array is:";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}