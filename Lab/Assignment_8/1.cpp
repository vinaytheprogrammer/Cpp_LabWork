#include<bits/stdc++.h>
using namespace std;

//Design a program to handle multiple exceptions. i.e. divide by zero, divide by
//very large numbers and assigning a very large negative numbers.
int main()
{

int n,m;
cout<<"Enter the Numerator : ";
cin>>n;
cout<<"Enter the Denominator : ";
cin>>m;
cout<<"Divide n/m : ";
try
{
    if(m == 0  )
    {
        throw 0;
    }
    else if( m >= INT_MAX )
    {
        throw "Denominator is Very Large ";
    }
    else if( m <= INT_MIN)
    {
        throw "Denomianator is Very Small ";
    }
    else{
        cout<<n/m;
    }
}
catch(int e)
{
cerr<<"Run time Error";
}
catch(const char* s1)
{
    cerr<<s1;
}

return 0;
}