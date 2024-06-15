#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a=0,b=0,i=1;
    cin>>n;
    
    a=a+i;
    n=n-i;
    i++;
    while(n<0)
    {
        cout<<"hi";
        b=b+i;
        n=n-i;
        i++;
        b=b+i;
        n=n-i;
        i++;
        a=a+i;
        n=n-i;
        i++;
        a=a+i;
        n=n-i;
        i++;
    }
    cout<<a<<" "<<b;
    return 0;
    
}