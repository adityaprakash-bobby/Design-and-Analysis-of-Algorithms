#include<bits/stdc++.h>
#define SIZE 10

using namespace std;

void displayq(int a[],int f,int r)
{
    int i;
    if(!(r==-1 || f>r))
        {
	    cout<<"The resultant queue is:";
	    for(i=f;i<=r;i++)
	    	{
	        cout<<" "<<a[i];
	    	}
        }
    else
        cout<<"Queue is empty.\n";

}
void insertq(int a[],int *f,int *r,int x)
{
    if(*r==SIZE-1)
    {
        cout<<"Overflow\n";
        return;
    }
    if(*r==-1)
    {
        *r=0;
        *f=0;
        a[*r]=x;
    }
    else
    {
    *r=*r+1;
    a[*r]=x;
    }
//cout<<a[*r]<<" ";
}
int deleteq(int a[],int *f,int *r)
{
    int x;
    if(*r==-1 || *f>*r)
    {
        cout<<"Underflow\n";
        return -1;
    }
    else
    {
        x=a[*f];
        *f=*f+1;
    }
    return x;
}
int main()
{
    int a[SIZE],temp,i;
    int rear=-1;
    int front=-1;
    int ch;
    int count;

    cout<<"\n1->INSERT\n2->DELETE\n3->Display Queue\n4->Exit\n";

    while(1)
    {
    cout<<"Enter your choice:";
    cin>>ch;
    cout<<endl;
        switch(ch)
    {
        case 1:
            cout<<"Enter your Insert element:";
            cin>>temp;
            insertq(a,&front,&rear,temp);
            break;
        case 2:
            temp=deleteq(a,&front,&rear);
            if(temp!=-1)
                cout<<"The Deleted element is "<<temp<<endl;
            break;
        case 3:
            displayq(a,front,rear);
            break;
        case 4:
            count=1;
            break;
        default:
            cout<<"Invalid choice!"<<endl;
    }
    if(count==1)
        break;
    }

    return 0;
}
