#include<bits/stdc++.h>
#define S 10
using namespace std;

bool identical(int *p1,int *p2)
{
    int count=0;
    for(int i=0;i<S;i++)
        {
            if(*(p1+i)==*(p2+i))
            {
                count++;
            }
        }
    if(count==S)
    {
        return 1;

    }
    return 0;
}


int main()
{
    int a[S],b[S];
    int *p1=a;
    int *p2=b;
    for(int i=0;i<S;i++)
        cin>>a[i];
    for(int i=0;i<S;i++)
        cin>>b[i];
    
    bool t=identical(p1,p2);
    if(t==1)
    {
        cout<<"Identical";
    }
    else
    cout<<"not identical";

    return 0;
}