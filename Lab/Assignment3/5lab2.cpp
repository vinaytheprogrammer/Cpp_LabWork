#include<bits/stdc++.h>

using namespace std;


class Fraction
{
int num,denom;
public:
Fraction()
{
num=0;
denom=1;
}
Fraction(int a,int b)
{
num=a;
denom=b;
}
~Fraction()
{
cout<<"object is destroyed\n";

}
void getFraction()
{
    cout<<"\n\n";
    float result=num/denom;
    cout<<num<<"/"<<denom<<" = "<<result<<endl;
    cout<<"\n\n";

}

void setFraction(int a,int b)
{
    num=a;
    denom=b;
}

Fraction addFraction(Fraction,Fraction);
Fraction reduceFraction(Fraction);
Fraction divFraction(Fraction,Fraction);


};

Fraction Fraction :: addFraction(Fraction f1,Fraction f2)
{
    Fraction temp;
    int a,b;
    temp.denom = __gcd(f1.denom,f2.denom);
    a=temp.denom/f1.denom;
    b=temp.denom/f2.denom;
    temp.num=a*f1.num+b*f2.num;
   
    return temp;
}

Fraction Fraction :: reduceFraction(Fraction f)
{
    Fraction temp;
    int tem;
    tem=__gcd(f.num,f.denom);
    temp.num=f.num/tem;
    temp.denom=f.denom/tem;
    cout<<"Reduced Fraction: \n";
    return temp;
}

Fraction Fraction :: divFraction(Fraction f1,Fraction f2)
{
    Fraction temp;
    temp.num=f1.num*f2.denom;
    temp.denom=f2.num*f1.denom;

    return temp;

}
int main()
{
    Fraction f1(30,5),f2(20,5),f3,f4;
    f1.getFraction();
    f2.getFraction();
    f3.getFraction();
    f3=f3.addFraction(f1, f2);
    f3.getFraction();
    f3=f3.reduceFraction(f3);
    f3.getFraction();
    f3=f3.divFraction(f1,f2);
    f3.getFraction();


    return 0;
}