#include<iostream>
using namespace std;
struct Node
{
    int data ;
    Node *next ;
};
Node *front = NULL ;
Node *rear = NULL ;

int isempty()
{
    if (front == NULL && rear == NULL)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
int enqu(int d)
{
    Node *temp = new Node() ;
    temp->data  = d ;
    temp->next  = NULL ;

    if (front ==  NULL)
    {
        front = temp ;
        rear = temp ;
    }
    else
    {
        rear->next  =temp ;
        rear = temp ;
    }
}
int dequ()
{
    if (front ==  NULL  && rear == NULL)
    {
        cout<<"It is empty"<<endl;
    }
    else
    {
        Node *temp = new Node() ;
        temp = front ;
        front = front->next ;
        free(temp) ;
    }
}
int showFront()
{
    if (front == NULL  && rear == NULL)
    {
        cout<<"It is empty"<<endl;
    }
    else
    {
        cout<<"value at top : "<<front->data ;
    }
}
int disp()
{
    if (front == NULL && rear == NULL)
    {
        cout<<"It is empty"<<endl ;
    }
    else
    {
    Node *temp  = new Node() ;
    temp = front ;
    while(temp!=NULL)
    {
        cout<<temp->data<<" , " ;
        temp = temp->next ;
    }
    }
}
int main()
{
    dequ();
    cout<<endl ;
    isempty();
        cout<<endl ;
        enqu(2);
        enqu(90);
        enqu(11);
        enqu(100);
        disp();
            cout<<endl ;
            dequ();
            dequ();
            disp();
                cout<<endl ;
                showFront() ;
}
