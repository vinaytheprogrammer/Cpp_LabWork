#include<bits/stdc++.h>
using namespace std;

class A
{
    public :
    A()
    {
        cout<<"Constructor of Class A"<<endl;
    }
    virtual ~A()
    {
        cout<<"Destructor of Class A"<<endl;
    }
    void print(){
        cout<<"A "<<endl;
    }
};

class B: public A
{
    public :
    B()
    {
        cout<<"Constructor of Class B"<<endl;
    }
    ~B()
    {
        cout<<"Destructor of Class B"<<endl;
    }
    void print(){
        cout<<"B "<<endl;
    }
};
int main()
{
A *a=new B;
delete a;           // Concept of Virtual destructor
return 0;
}