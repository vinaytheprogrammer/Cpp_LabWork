#include<bits/stdc++.h>
using namespace std;

class intStack{
    int top;
    int *ptr;

    public:
    intStack()
    {
        top=-1;
        ptr=new int[10];
    }
    intStack(int size)
    {
        top=-1;
        ptr=new int[size];
    }
    // intStack(const intStack &l)
    // {
    //     l=new int[10];
    //     top=top+l.top;
    // }
    int pop()
    {
        if(top==-1)
        {
            cout<<"Underflow\n";
            return -1;
        }
        else{
            int poped;
            poped = *(ptr+top);
            top--;
            return poped;
        }

    }
    void push(int n)
    {
        if(top==4)
        {
            cout<<"OVERFLOW\n";
            return ;
        }
        else{
            top++;
            *(ptr+top)=n;
        }
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"Underflow\n";
            return;
        }
        else
        {
            cout<<"Elements are : \n";
            for(int i=0;i<=top;i++)
            {
                cout<<*(ptr+i)<<"  ";
            }
            cout<<endl;
        }
    }
};
int main()
{

    intStack s1(5);
    // s2=s1;//not working required way
    // intStack s2=s1;

    s1.push(1);
    s1.display();
    s1.push(1);
    s1.display();    s1.push(1);
    s1.display();
 
    s1.push(3);
    s1.display();

    cout<<s1.pop();
    s1.display();
    // s2.display();
    //    s2.push(2);
    // s2.display();
    return 0;
}