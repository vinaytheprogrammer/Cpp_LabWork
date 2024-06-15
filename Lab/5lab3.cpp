#include<bits/stdc++.h>
using namespace std;

class Point2D
{
    int xCo,yCo;

    public:

    Point2D()
    {
        xCo=0;
        yCo=0;
    }
    Point2D(int a,int b)
    {
        xCo=a;
        yCo=b;
    }
    ~Point2D()
    {
        cout<<"object is destroyed\n";
    }
    void getPoint()
    {
        cout<<"\n";
        cout<<"("<<xCo<<", "<<yCo<<")"<<"\n";
    }
    void setPoint(int a,int b)
    {
        xCo=a;
        yCo=b;
    }
    bool insideCircle(int r,Point2D cen)
    {
        int temp=pow((xCo-cen.xCo),2)+pow((yCo-cen.yCo),2)-pow(r,2);
        if(temp>=0)
            return 0;
        else    
            return 1;
    }
    bool checkCollinear(Point2D a,Point2D b)
    {
        int temp=xCo*(a.yCo-b.yCo)-yCo*(a.xCo-b.xCo)+((a.xCo)*(b.yCo)-(a.yCo)*(b.xCo));
        if(temp==0)
            return 1;
        else
            return 0;
    }
    bool onAxis()
    {
        if(xCo==0 || yCo==0)
            return 1;
        else 
            return 0;
    }

};
int main()
{
    Point2D p1(7,8),p2(7,7),p3(0,0);
    p1.getPoint();
    p2.getPoint();
    p3.getPoint();

    cout<<"Is Point is Inside "<<p3.insideCircle(5,p2)<<endl;
    cout<<"Is Point is Collinear "<<p3.checkCollinear(p1,p2)<<endl;
    cout<<"Is Point is on the Axis "<<p3.onAxis()<<endl;

    return 0;
}