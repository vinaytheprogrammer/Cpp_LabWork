#include<bits/stdc++.h>
using namespace std;

class Point 
{
    protected:
    int xco,yco;
    public:
    Point()
    {
        xco=0; yco=0;
    }
    Point (int xco,int yco)
    {
        this->xco=xco;
        this->yco=yco;
    }
    ~Point ()
    {
        cout<<"Point Class Destructor is Called "<<endl;
    }
    void input()
    {
        cout<<"X - Co-ordinate ";
        cin>>xco;
        cout<<"y- Co-ordinate ";
        cin>>yco;
    }
    void print ()
    {
        cout<<"( "<<xco<<", "<<yco<<")"<<endl;
    }
};

class Circle :public Point
{
    protected:
        float radius;
    public:
    Circle()
    {
        radius=0.0;
    }
    ~Circle()
    {
        cout<<"Circle Class Destructor is Called "<<endl;
    }
    void input()
    {
        Point :: input();
        cout<<"Radius : ";
        cin>>radius;
    }
    void print()
    {
        cout<<"( x - "<<xco<<") ^ 2 + ( y - "<<yco<<") ^ 2 = "<<radius*radius<<endl;  
    }
    void area()
    {
        cout<<"Area is == "<<3.1415*radius*radius<<endl;
    }
};

class Cylinder : public Circle
{
    protected:
        int height;
    public:
        Cylinder()
        {
            height=0;
        }
        ~Cylinder()
        {
            cout<<"Cylinder Class Destructor is Called "<<endl;

        }
        void input()
        {
            Circle :: input();
            cout<<"Height : ";
            cin>>height;
        }
        float surarea()
        {
            return 2*3.1415*radius*(radius+height);
        }
        float volume()
        {
            return 3.1415*radius*radius*height;
        }
        void print()
        {
            Circle :: print();
            float sa=surarea(),v=volume();
            cout<<"Surface Area is == "<<sa<<" , Volume "<<v<<endl;
        }

};
int main()
{

Cylinder cy;

cy.input();
cy.print();

return 0;
}