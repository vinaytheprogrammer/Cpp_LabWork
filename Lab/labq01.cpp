#include<bits/stdc++.h>
int bits(int,int,int);
using namespace std;
int main()
{
    short n;
    int store;
    cout<<"enter the element : ";
    cin>>n;
    int a=10;
    int b=5;
store=bits(n,a,b);
cout<<store;
return 0;
}
int bits(int x,int y,int z)
{
    return (((1<<y)-1) & ((x>>(z-1))));
}