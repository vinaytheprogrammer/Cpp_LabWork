#include<bits/stdc++.h>
using namespace std;
int main()
{

    // ith bit is set or not
    int a,n;
    cin>>n>>a;
    int b=1<<(a-1);
    bool c= n & b;
    // cout<<c;
    if(c==1)
        cout<<"Set";
    else
        cout<<"Not Set";
    return 0;
}