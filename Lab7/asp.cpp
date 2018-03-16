#include<iostream>
using namespace std;

void input(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
}

/*void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}*/

void sort_finish(int a[],int b[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
			if(b[j]==b[j+1] && a[j]>=a[j-1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}	
		}
}

void acivity_selection(int a[],int b[],int n)
{
    int i,j;
 
    cout<<"\nFollowing activities are selected:"<<endl;
 
    i=0;
	cout<<a[i]<<"->"<<b[i]<<endl;

    for(j=1;j<n;j++)
    {
      if(a[j]>=b[i])
      {
          cout<<a[j]<<"->"<<b[j]<<endl;
          i=j;
      }
    }
}


int main()
{
	int a[40],n,b[40];

	cout<<"Enter the total number of activities:";
	cin>>n;

	cout<<"Enter the start times:";
	input(a,n);
	cout<<"Enter their respective finish times:";
	input(b,n);

	sort_finish(a,b,n);
	
	acivity_selection(a,b,n);
	cout<<endl;
	return 0;
}