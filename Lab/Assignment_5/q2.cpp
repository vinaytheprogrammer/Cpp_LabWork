#include<bits/stdc++.h>
using namespace std;

class Vector
{
    
    int i,j,k;
    public:
    Vector()
    {
        i=0;
        j=0;
        k=0;
    }
    Vector(int i,int j,int k)
    {
        this->i=i;
        this->j=j;
        this->k=k;   
    }
    void operator *=(Vector&);
    Vector operator *=(int );
	Vector operator*(Vector);

    //Vector operator /=(Vector); we cannot devide two vectors
    Vector operator /=(int );

    friend Vector operator *(Vector , int);
    friend Vector operator /(Vector , int);
    friend Vector operator *(int , Vector);

	friend void operator<<(ostream& , Vector&);
	friend void operator>>(istream& ,Vector&);

};
void Vector :: operator *= (Vector &c)
{
    
   	int p=j*c.k-(k*c.j);
	int q=-1*(i*c.k-(c.i*k));
	int r=i*c.j-(j*c.i);
	i=p;j=q;k=r;
	// return *this;

}

Vector Vector :: operator*=(int a)
{
    i=a*i;
    j=a*j;
    k=a*k;

    // return *this;
}
Vector Vector :: operator*(Vector c)
{
	int p=j*c.k-(k*c.j);
	int q=-1*(i*c.k-(c.i*k));
	int r=i*c.j-(j*c.i);
	
	return Vector(p,q,r);
}

Vector Vector :: operator/=(int a)
{
    i=i/a;
    j=j/a;
    k=k/a;

    // return *this;

}

Vector operator*(Vector a, int b)
{
    Vector c=a;
    c*=b;
    return c;
}
Vector operator *(int b, Vector a)
{
    Vector c=a;
    c*=b;
    return c;
}
Vector operator /(Vector a, int b)
{
    Vector c=a;
    c/=b;
    return c;
}


void operator<<(ostream& out,Vector &c)
{
	out<<c.i<<"i "<<c.j<<"j "<<c.k<<"k "<<endl;
	return;
}

void operator>>(istream& in,Vector &c)
{
	in>>c.i>>c.j>>c.k;
	return;
}


int main()
{
Vector v1,v2,v3;
int a;
	cout<<"Input First Vector v1 ";
	cin>>v1;
	cout<<"Input Second Vector v2";
	cin>>v2;
	cout<<"Enter Integer Value a ";
	cin>>a;
	v3=v1*v2;   // ok
	cout<<"v1*v2 ==  "<<v3;
	v3=v1*a;    
	cout<<"v1*a == "<<v3;
	v3=a*v1;
	cout<<"a*v1 == "<<v3;
	v3=v1/a;
	cout<<"v1/a == "<<v3;
    v1*=v2;
    cout<<"v1*=v2 == "<<v1;
    // v1*=a; //OK
    // cout<<"v1*=a == "<<v1;
    // v1/=a;
    // cout<<"v1/=a == "<<v1;    

return 0;
}