#include<bits/stdc++.h>
using namespace std;
int main()
{
    int z,n,r=0,y=0,temp=0;
    cin>>z;
    vector<int > v;
    for(int i=0;i<z;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i=0;i<v.size();i++)
    {
        n=v[i];
        temp=0;
        y=0;
        while(n!=0)//5 2 1
        {
            r=n%2;//0 1 0 1
            if(r==1)
            {
            temp=temp+(pow(2,y));//0 1 1 
            y++;//1 2 3 4

            }
            n=n/2;//5 2 1 0
        }
        cout<<temp<<endl;
    }
    return 0;
}