#include<bits/stdc++.h>
using namespace std;
int r=0,temp=0;

void without_recursion(int n)
{
    int r,temp=0;
    while(n!=0)
    {
        r=n%10;//1 2 1
        temp+=r;//1 3 4
        n/=10;//12 1 121
    }
    cout<<"without_recursion    "<<temp<<"\n";
}

int with_recursion(int n)
{
    //121
    // int r,temp=0;
    if(n!=0)
    {
        r=n%10;//1 2 1 
        temp+=r;//1 3 4
        n/=10;//12 1
        return with_recursion(n);
    }
    else
    return temp;
}
int main()
{
int n;
cout<<"Enter the number for SOD \n";
cin>>n;
without_recursion(n);
int t=with_recursion(n);
cout<<"with_recursion    "<<t;
return 0;
}