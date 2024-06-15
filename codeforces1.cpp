#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a=0,b=0,i=1,temp=0;
    cin>>n;
    temp=n;
    if(n>0)
    {
      a=a+i;//1
    n=n-i;//16
    i++;//2
    }
    while(n!=0)
    {
        cout<<"hi";
        if(n>0 && i<=n)
        {
          cout<<n;

          b=b+i;//2
        n=n-i;//7
        i++;//3
        }
        if(n>0 && i<=n)
        {
          cout<<n;
        b=b+i;//5
        n=n-i;//4
        i++;//4
        }
        if(n>0  && i<=n)
        {
          cout<<n;
        a=a+i;//5
        n=n-i;//0
        i++;//5
        
        }
        
        if(n>0 && i<=n)
        {
          cout<<n;
          a=a+i;//10
        n=n-i;//-5
        i++;//6

        }
            }
    cout<<a<<" "<<temp-a;
    return 0;
    
}