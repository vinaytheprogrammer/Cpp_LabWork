#include<bits/stdc++.h>
using namespace std;

struct product
{
    int pid,rating;

};


void rated(struct product *p[],int n,int *top,int *avg,int *low)
{
    for(int i=0;i<n;i++)
    {
        if(p[i]->rating >=4)
            top++;
        if(p[i]->rating >=3 && p[i]->rating < 4)
            avg++;
        if(p[i]->rating <3)
            low++;
    }
}

//NOT WORKING
int main()
{
    int n;
    int top=0,avg=0,low=0;

    cout<<"INPUT NUMBER OF PRODUCT\n\n";
    cin>>n;
    product *p[n];
    
    // for(int i=0;i<n;i++)
    // {
    // cout<<"ENTER PRODUCT ID AND RATING \n\n";

    //     cin>>p[i]->pid>>p[i]->rating;
    // }
        cin>>p[0]->pid>>p[0]->rating;
        cin>>p[1]->pid>>p[1]->rating;

    rated(p,n,&top,&avg,&low);
    cout<<low;
    return 0;
}