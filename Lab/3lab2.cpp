#include<bits/stdc++.h>
using namespace std;

//INCOMEPLETE
void pattern(int a=5,int b=1)
{
    int temp=1;
    for(int i=0;i<=a;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(temp>9 && temp<20)
                cout<<temp-8-b<<" ";
            else if(temp>=20 && temp<30)
                cout<<temp-18-b<<" ";
            else 
                cout<<temp<<" ";
            temp=temp+b;
            
        }
        cout<<"\n";
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    pattern(a,b);
    return 0;
}