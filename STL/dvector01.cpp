#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4};
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";

    cout<<"\n"<<v.empty();?


    v.clear();//?

    cout<<"\n"; //not working


    for(int i=0;i<n;i++)
    cout<<v[i]<<" ";
    return 0;
}