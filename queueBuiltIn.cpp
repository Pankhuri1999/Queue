#include<iostream>
#include<queue>
using namespace std;
int disp(queue<int> q)
{
    int l  = q.size() ;
    for (int i = 0 ; i<l ; i++)
    {
        cout<<q.front()<<" , " ;
        q.pop() ;
    }
}
int main()
{
    queue<int> a;

    a.push(1);
    a.push(2);
    a.push(4);

 cout<<"Displa Queue  : ";
 disp(a);


 cout<<"Front element "<<a.front()<<endl;
 cout<<"Rear element: "<<a.back()<<endl;

 a.pop();


 disp(a);


 cout<<"Queue is empty or not : "<<a.empty();




}
