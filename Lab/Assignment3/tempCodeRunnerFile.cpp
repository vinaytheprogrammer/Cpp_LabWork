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
