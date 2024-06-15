#include<bits/stdc++.h>
using namespace std;

class Line{
    public:
    int len;
    Line()
    {
        len=0;
    }
    Line(int x)
    {
        len=x;
    }

};
class triangle      //     class triangle : public Line    -- this inheritance also allowed
{

Line side1,side2,side3;
public:
// triangle()
// {
//     // this->side1.len=0;
//     // this->side2.len=0;
//     // this->side3.len=0;
//     this->side1.len=a.len;
//     this->side2.len=b.len;
//     this->side3.len=c.len;
// }
triangle(Line a,Line b,Line c)
{
    side1.len=a.len;
    side2.len=b.len;
    this->side3.len=c.len;
}
trinagle(const triangle &x)     //const &triangle x  -- not valid
{
    side1.len=x.side1.len;
    this->side2.len=x.side2.len;
    this->side3.len=x.side3.len;

}
void setSide(Line a,Line b,Line c)
{
    side1.len=a.len;
    this->side2.len=b.len;
    this->side3.len=c.len;
}
void showSide()
{
    cout<<"First : "<<side1.len<<" ";   
    cout<<"Second : "<<this->side2.len<<" ";
    cout<<"Third : "<<this->side3.len<<" ";

}
friend float findArea(triangle& obj);
};

float findArea(triangle& obj)
{
    if(obj.side1.len>obj.side2.len && obj.side1.len>obj.side3.len)
    {
        return 0.5*obj.side2.len*obj.side3.len;
    }
    else if(obj.side2.len>obj.side1.len && obj.side2.len>obj.side3.len)
    {
        return 0.5*obj.side1.len*obj.side3.len;
    }
    else if(obj.side3.len>obj.side2.len && obj.side3.len>obj.side1.len)
    {
        return (0.5*(obj.side2.len))*(obj.side1.len);
    }
    // else{
    //     cout<<obj.side3.len<<" ";
    // return 6;

    // }

}

int main()
{
    Line l1(3),l2(4),l3(5);
    triangle t(l1,l2,l3);
    t.showSide();
    cout<<"\nArea is: ";
    cout<<findArea(t);
    cout<<endl;

//                                   /
    triangle t2=t;//triangle t2(t) \/
    t2.showSide();
    cout<<"\nArea is: ";
    cout<<findArea(t2);

    return 0;
}