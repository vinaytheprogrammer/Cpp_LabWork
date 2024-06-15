#include<bits/stdc++.h>
using namespace std;

int rprime(long long a)//recursive function prime
{//10
    if(a<2)
    {
        //code
    }
    else
    {
        if(a%(a-1)==0)//
        {
            return rprime(a-1);
        }
    }

}


int prime(long long n)
{
    int flag=0;
    if(n<2)
        cout<<"not prime";
    else{
        for(long long i=2;i<sqrt(n);i++)
        {
          if(n%i==0)
            flag=1;
        }

    }
    return flag;
}


int main()
{
    long long  n;
   
    cin>>n;
    int flag= prime(n);

    if(flag==1)
        cout<<" Not Prime\n";
    else 
       cout<<" prime\n";
    return 0;
}