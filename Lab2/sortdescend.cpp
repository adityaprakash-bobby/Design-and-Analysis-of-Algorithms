#include<bits/stdc++.h>

using namespace std;

void sort_desc(int a[],int n)
{
	int i,j;
	int temp;

	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
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

	sort_desc(a,n);

	cout<<"The resultant array is:";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;

	return 0;
}