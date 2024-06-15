#include<bits/stdc++.h>
#define SIZE 5
using namespace std;

//standard deviation and variance
int main()
{
vector<int> p;
int avg=0,total=0,var=0,sigma=0;
//pushing 10 elements in a vector
for(int i=0;i<SIZE;i++)
{
    int n;
    cin>>n;
    p.push_back(n);
    avg+=p[i];

}
// cout<<avg;
avg=avg/p.size();
for(int i=0;i<p.size();i++)
{
       total+= pow((p[i]-avg),2);   
// cout<<total<<" ";

}
var=total/p.size();
sigma=sqrt(var);
cout<<"Variance is "<<var;
cout<<"\nStandard Deviation is "<<sigma;
return 0;
}