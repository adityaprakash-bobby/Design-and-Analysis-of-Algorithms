#include<bits/stdc++.h>
#define SIZE 10

using namespace std;

void push(int a[],int *top,int x)
{
	if(*top==SIZE)
	{
		cout<<"Overflow"<<endl;
	}
	else{
	*top=*top+1;
	a[*top]=x;
 	}
 	cout<<endl;
}

void pop(int a[],int *top)
{
	if(*top==-1)
	{
		cout<<"Underflow"<<endl;
	}
	else{
	cout<<a[*top]<<" is deleted."<<endl;
	*top=*top-1;
	}
}

void display(int a[],int top)
{	
	int i;
	if(top!=-1)
	{
		cout<<"The resultant queue is:";
		for(i=0;i<=top;i++)
			cout<<a[i]<<" ";
	}
	else
		cout<<"Stack is empty.";
	cout<<endl;
}

int main()
{
	int a[40],i,num;
	int ch,c=1;
	int top=-1;

	cout<<"1->Push\n2->Pop\n3->Display\n4->Exit"<<endl;
	while(c)
	{	
		cout<<"Enter your choice:";
		cin>>ch;
		cout<<endl;
		switch(ch)
		{
			case 1:
			cout<<"Enter element to be pushed:";
			cin>>num;
			push(a,&top,num);
			break;

			case 2:
			pop(a,&top);
			break;

			case 3:
			display(a,top);
			break;

			case 4:
			c=0;
			break;

			default:
			cout<<"Invalid choice!"<<endl;
			break;
		}
}
	return 0;
}