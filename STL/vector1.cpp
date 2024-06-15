#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> p;
    int n;
    cout<<"input the size";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        p.push_back(a);
    }

    // print vector
    for(int i=0;i!=p.size();i++)
    {
        cout<<p[i]<<" ";

    }
    return 0;
}