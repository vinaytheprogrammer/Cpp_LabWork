#include<iostream>
using namespace std;

void process(int f[])
{
    int i=0;
    while(i!=9)
    {cout<<" hii "<<f[i];
    i++;}
}
int main()
{
    int z[10],i;
    for(i=0;i<10;i++)
    z[i]=i;

    process(&z[5]);
}