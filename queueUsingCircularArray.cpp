#include<iostream>
using namespace std;

#define SIZE 5
int q[SIZE];
int front = -1;
int rear = -1;

bool isempty()
{
    if (front == -1 && rear == -1)
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
    if ((rear + 1)%SIZE == front)
    {
        cout<<"Queue is full" ;
    }
    else
    {
        if (front == -1)
        {
            front = 0 ;
        }

            rear = (rear + 1 )%SIZE ;
            q[rear] = d ;


    }
}
 int dequ()
 {
     if (front == -1 && rear == -1)
     {
         cout<<"Queue is empty"<<endl;
     }
     else
     {
         if (front == rear )
         {
             front == rear == -1 ;
         }
         else
         {
             front = (front+1)%SIZE ;
         }
     }
 }
 int showFront()
 {
     if (front == -1 && rear == -1)
     {
         cout<<"Queue is empty"<<endl;
     }
     else
     {
         cout<<"Value of front is : "<<q[front] ;
     }
 }
 int disp()
 {
     if (front == -1 && rear == -1)
     {
         cout<<"Queue is empty"<<endl;
     }
     else {
     if (front<=rear)
     {
         for (int i = front ; i<=rear ; i++)
         {
             cout<<q[i]<<" , " ;
         }
     }
     else
     {
         for (int i = front ; i<SIZE ;i++)
         {
             cout<<q[i]<<" , " ;

         }
         for (int i = 0 ;i<=rear ;i++)
         {
             cout<<q[rear]<<" , " ;
         }

     }
     }
 }
 int main()
 {
     isempty();
     cout<<endl;
     dequ() ;
          cout<<endl;
          enqu(10);
          enqu(11) ;
          enqu(11);
          enqu(90);
          disp();
               cout<<endl;
               showFront() ;
                    cout<<endl;
                    dequ();
                         cout<<endl;
                         dequ() ;
                              cout<<endl;
                              disp() ;
 }
