#include<bits/stdc++.h>
#define S 10
using namespace std;


void count(int a[])
{
    int b[S];
    for(int i=0;i<S;i++)
    {
    int c=0;

        int temp=a[i];
        for(int j=0;j<S;j++)
           if(a[j]==temp)
           {
            c++;
           } 
        b[i]=c;
        // cout<<b[i]<<" ";
        
    }

    for(int i=0;i<10;i++)
    {
        if(b[i-1]!=b[i])
        {
            cout<<b[i]<<" ";
        }
    }


}
int main()
{
    int a[S];
    for(int i=0;i<S;i++)
        cin>>a[i];
    count(a);
 return 0;   
}