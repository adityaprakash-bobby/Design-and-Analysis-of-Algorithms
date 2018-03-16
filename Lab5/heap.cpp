#include<bits/stdc++.h>

using namespace std;

void max_heapify(int *a, int i, int n)
{
    int j, temp;
    temp = a[i];
    j = 2 * i;
    while (j <= n)
    {
        if (j < n && a[j+1] > a[j])
            j = j + 1;
        if (temp > a[j])
            break;
        else if (temp <= a[j])
        {
            a[j / 2] = a[j];
            j = 2 * j;
        }
    }
    a[j/2] = temp;
    return;
}

void build_maxheap(int *a,int n)
{
    int i;
    for(i = n/2; i >= 1; i--)
    {
        max_heapify(a,i,n);
    }
}

void del_min(int *a,int *n)
{
	int i;
	int temp;

	temp=a[1];
	a[1]=a[*n];
	a[*n]=temp;

	//temp = a[*n];
	*n = *n-1;
	max_heapify(a,1,*n);
}

void insert(int *a, int *n,int x)
{
	int i,temp;

	*n = *n+1;
	a[*n]=x;
	temp = *n;
	build_maxheap(a,temp);

}

int main()
{
    int n, i, x;
    cout<<"Enter the number of elements";
    cin>>n;

    int a[50];
    for (i = 1; i <= n; i++)
        cin>>a[i];
    
    build_maxheap(a,n);

    cout<<"Max Heap\n";
    for (i = 1; i <= n; i++)
        cout<<a[i]<<" ";
    cout<<endl<<endl;

    //delete maximum element from the heap
    del_min(a,&n);
    cout<<"After deletion:\n";
    for (i = 1; i <= n; i++)
        cout<<a[i]<<" ";				
    cout<<endl<<endl;

    //insert element 700 to the heap
    insert(a,&n,700);
    cout<<"After insertion:\n";
    for (i = 1; i <= n; i++)
        cout<<a[i]<<" ";
    cout<<endl;	

    return 0;
}
