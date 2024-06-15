#include<bits/stdc++.h>
using namespace std;
void occuring(int a[],int n)
{
    int count=0,temp=0,c[n];
    for(int i=0;i<n;i++)
    {
        temp=a[i];
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==temp)
                count++;
        }
        c[i]=count;
    }
    cout<<"\nNUMBERS that occurs odd number of times\n";
    for(int i=0;i<n;i++)
    {
        if(c[i]%2!=0)
            cout<<a[i]<<" --> "<<c[i]<<" ";
        cout<<endl;
    }
    cout<<endl;
}


void sort_a(int a[],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Input the size of the array\n\n";
    cin>>n;
    int a[n],b[n];
    cout<<" \n\ninput the First array\n\n";

  
    // cout<<" \n\ninput the Second array\n\n";

    // for(int i=0;i<n;i++)
    // {
    //     cin>>b[i];
    // }
   
    cout<<"\n\nSecond array\n\n";

    // for(int i=0;i<n;i++)
    // {
    //     cout<<b[i]<<" ";
    // }
    cout<<endl<<endl;
   
    occuring(a,n);
    cout<<"Sort array till 0th , 1st and 2nd position  in Ascending order\n";
    sort_a(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }


    int ch;
    cout<<"Enter choice\n";
    cin>>ch;

    switch(ch)
    {
        case 1:
        {
            for(int i=0;i<n;i++)
            {
        
                cin>>a[i];
            }
            cout<<"\n\nFirst array\n\n";

            for(int i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
    }
        }
    }
    return 0;
}