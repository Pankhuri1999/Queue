#include<iostream>
using namespace std;
struct Node
{
    int data ;
    Node *link ;
};
Node *fron = NULL ;
Node *rear = NULL ;
bool isempty()
{
    if (fron == rear && fron==NULL && rear==NULL)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}
int enqu(int value)
{
    if (isempty()==true)
    {
        cout<<"empty list"<<endl ;
    }
    else
    {
        Node *ptr = new Node() ;
        ptr->data = value ;
        ptr->link = NULL ;
        Node *temp = fron ;
        while(temp->link!=NULL)
        {
            temp = temp->link ;
        }
        temp->link = ptr ;
        rear = ptr ;
    }
}
int dequ()
{
    Node *temp = fron ;
    fron = fron->link ;
    free(temp);
}
int show()
{
    Node *temp = fron ;
    cout<<endl ;
    cout<<"show front data - "<<fron->data ;
    cout<<endl ;
}
int display()
{
    cout<<"display started "<<endl ;
    Node *temp = fron ;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl ;
        temp = temp->link ;
    }
}
int main()
{
    isempty();
    enqu(9);
    enqu(5);
    enqu(1);
    enqu(0);
    enqu(1);
    display();
    show();
    isempty();
    dequ();
    display();
}
