#include<bits/stdc++.h>
using namespace std;

class Vector
{
    int i,j,k;
    public:
    Vector():i(0),j(0),k(0){}
    Vector(int i,int j,int k)
    {
        this->i=i;
        this->j=j;
        this->k=k;
    }
    void operator++();// prefix
    void operator++(int);//postfix

    void operator--();// prefix
    void operator--(int);//postfix
    friend void operator<<(ostream&,Vector &);
};

void Vector :: operator++()
{
    ++i;
    ++j;
    ++k;
}
void Vector :: operator++(int)
{
    i++;
    j++;
    k++;
}

void Vector :: operator--()
{
    --i;
    --j;
    --k;
}
void Vector :: operator--(int)
{
    i--;
    j--;
    k--;
}
void operator<<(ostream &out,Vector &v)
{
    out<<v.i<<"i "<<v.j<<"j "<<v.k<<"k "<<endl;
}
int main()
{
Vector v1(1,2,3);
++v1;
cout<<" ++v1    "<<v1;

v1++;
cout<<" v1++    "<<v1;

--v1;
cout<<" --v1    "<<v1;

v1--;
cout<<" v1--    "<<v1;

return 0;
}