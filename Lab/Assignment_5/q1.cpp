#include<bits/stdc++.h>
using namespace std;

//by vinay gupta


class Vector
{
 
	int i,j,k;
	
	
	public:
		//Vector():i=0,j=0,k=0{}
		Vector()
		{
			this->i=0;
			j=0;
			k=0;
		}
		Vector(int i,int j,int k)
		{
			this->i=i;
			this->j=j;
			this->k=k;
		}
//		void show()
//		{
//			cout<<i<<"i "<<j<<"j "<<k<<"k "<<endl;
//		}
//		
		Vector operator+(Vector);
		Vector operator-(Vector);
		Vector operator*(Vector);
		Vector operator-();
		friend void operator<<(ostream& , Vector&);
		friend void operator>>(istream& ,Vector&);
};

Vector Vector:: operator+(Vector c)
{
	int p=i+c.i;
	int q=j+c.j;
	int r=k+c.k;
	
	
	return Vector(p,q,r);
}

Vector Vector :: operator-(Vector c)
{
	int p=i-c.i;
	int q=j-c.j;
	int r=k-c.k;
	
	return Vector(p,q,r);
}

Vector Vector :: operator*(Vector c)
{
	int p=j*c.k-(k*c.j);
	int q=-1*(i*c.k-(c.i*k));
	int r=i*c.j-(j*c.i);
	
	return Vector(p,q,r);
}

Vector Vector:: operator-()
{
	int p=-i;
	int q=-j;
	int r=-k;
	
	return Vector(p,q,r);
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
	cout<<"Input First Vector v1 ";
	cin>>v1;
	cout<<"Input Second Vector v2";
	cin>>v2;
	cout<<"First Vector v1 is : ";
	cout<<v1;
	cout<<"Second Vector v2 is : "<<endl;
	cout<<v2;
	v3=v1+v2;
	cout<<"Addition v1+v2 ==  "<<v3;
	v3=v1-v2;
	cout<<"Subsctration v1-v2 == "<<v3;
	v3=v1*v2;
	cout<<"Cross Product v1*v2 =="<<v3;
	v3=-v1;
	cout<<"Negative(unary minus) =="<<v3;
	
	return 0;
}