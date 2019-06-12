#include<bits/stdc++.h>

using namespace std;

int binary_search(int a[],int beg,int end,int x)
{
	int mid;
	if(beg<=end)
	{
		mid=beg+(end-beg)/2;

		if(a[mid]==x)
			return mid;
		if(a[mid]>x)
			return binary_search(a,beg,mid-1,x);
		return binary_search(a,mid+1,end,x);
		
	}
	return -1;
}

int main()
{
	int a[50],n,flag;
	int i,temp;

	cout<<"Enter size of array:";
	cin>>n;

	cout<<"Enter elements into array:";
	for(i=0;i<n;i++)
		cin>>a[i];

	cout<<"Enter element to search:";
	cin>>temp; 

	flag=binary_search(a,0,n-1,temp);

	if(flag==-1)
		cout<<temp<<" is not found."<<endl;
	else
		cout<<temp<<" is found at index "<<flag<<"."<<endl;

	return 0;
}