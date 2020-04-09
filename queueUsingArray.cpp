#include<iostream>
using namespace std;

#define SIZE 5
int q[SIZE];
int front = -1;
int rear = -1;

bool isempty()
{
    if (rear == -1 && front == -1)
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
    if(rear == SIZE - 1)
    {
        cout<<"Queue is full "<<endl;
    }
    else
    {
        if (front == -1)
        {
            front  = 0;
        }
        rear++ ;
        q[rear] = d ;
    }
}
int dequ()
{
    if (rear == -1 && front == -1)
    {
        cout<<"Queue is empty"<<endl ;
    }
    else
    {
        if (front == rear)
        {
        front = rear  = -1 ;
        }
        else
        {
            front++ ;
        }
    }
}
int showFront()
{
    if (rear == -1 && front == -1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Value at front: "<<q[front] ;
    }
}
int disp()
{
    if (front == -1 && rear == -1)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
    for (int i = front ; i<= rear ; i++)
    {
        cout<<q[i]<<" , " ;
    }
    }
}
int main()
{
    enqu(9);
    enqu(0);
    enqu(1);
    enqu(5);
    enqu(4);
    cout<<"Display: "<<endl;
    disp();
    dequ();
    cout<<"Dequ: "<<endl;
    dequ() ;
    cout<<"Dequ: "<<endl;
    cout<<"Show front: ";
    showFront() ;
    cout<<endl ;
    cout<<"Display: "<<endl;
    disp();
}
