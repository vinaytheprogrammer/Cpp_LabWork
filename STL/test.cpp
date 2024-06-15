#include<iostream>
using namespace std;

void search1d(int *,int n,int);
void search2d(int *[],int ,int n,int m);
//search3d(int *,int n,int m,int l);

int main()
{
    cout<<"input array";
    cout<<"\n 1: 1D";
    cout<<"\n 2: 2D";
    cout<<"\n 3: 3D";
    int ch;
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            cout<<"size of the array";
            int a,i,x;
            cin>>a;
            int first[a];
            for(i=0;i<a;i++)
            {
                cin>>first[i];
            }
            int *f=first;
            cout<<"input number wish to find";
            cin>>x;
            search1d(f,a,x);
            
            break;
            
        }
        case 2:
        {
            cout<<"enter the row and column ";
            int n,m;
            cin>>n>>m;
            int second[n][m];
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cin>>second[n][m];
                }
            }
            int x;
            cout<<"input number found";
            cin>>x;
            int (*s)[m]=second;
            search2d(s,x,n,m);
            break;
        }
        // case 3:
        // {
        //     cout<<"";
        // }

}
return 0;
}

void  search1d(int *f,int a,int x)
{
    for(int i=0;i<a;i++)
    {
        if(*(f+i)==x)
        cout<<"\n position is "<<i;
    }
}

void search2d(int *p,int a,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(*(*(s+i)+j)==a)
            cout<<"\n position is "<<i<<" "<<j;
        }
    }
}