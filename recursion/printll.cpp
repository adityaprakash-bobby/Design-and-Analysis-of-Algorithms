#include<bits/stdc++.h>

using namespace std;
struct node
{
    int info;
    struct node *link;
};
struct node *head=NULL;

void insert_front(int x)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));
    n->info=x;
    n->link=head;
    head=n;
}

void insert_end(int x)
{   
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
    n->info=x;
    n->link=NULL;
    head=n;
    return;
    }
    node *temp;
    temp=head;
    while(temp->link!=NULL)
        temp=temp->link;
    temp->link=n;
    n->info=x;
    n->link=NULL;
}

void delete_end()
{
    struct node *temp;
    int x;
    if(head==NULL)
    {
        cout<<"Empty list.\n";
        return;
    }
    if(head->link==NULL)
    {
        x=head->info;
        free(head);
        head=NULL;
        cout<<x<<" is the deleted element.\n";
        return;
    }
    temp=head;
    while(temp->link->link!=NULL)
        temp=temp->link;
    x=temp->link->info;
    free(temp->link);
    temp->link=NULL;    
    cout<<x<<" is the deleted element.\n";
}

void printrev(node* head) //recursive function
{   

    if (head == NULL)
       return;
 
    printrev(head->link);
 
    cout<<"["<<head->info<<"]->";
}



void display()
{
    struct node *temp;
    temp=head;
    if(temp==NULL)
    {
        cout<<"The linked list is empty.\n";
        return;
    }
    cout<<"[HEAD]-->";
    while(temp!=NULL)
    {
        cout<<"["<<temp->info<<"]-->";
        temp=temp->link;
    }
    cout<<"\n";
}
int main()
{
    int ch,temp;
    cout<<"\n1->Insert at front.\n2->Insert at end.\n3->Delete from end.\n4->Display the list.\n5->Print list in reverse.\n6->Exit.\n";
    while(1)
    {
        cout<<"\nEnter your choice:";
        cin>>ch;
        cout<<"\n";
        switch(ch)
        {
            case 1:
                cout<<"Enter your Node data:";
                cin>>temp;
                insert_front(temp);
                break;
            case 2:
                cout<<"Enter your Node data:";
                cin>>temp;
                insert_end(temp);
                break;
            case 3:
                delete_end();
                break;
            case 4:
                display();
                break;
            case 5:
                printrev(head);
                break;
            case 6:
                goto A;
                break;
            default:
                cout<<"Invalid Choice!\n";
        }
    }
    A:return 0;
}