 #include<bits/stdc++.h>
using namespace std;


class Time
{
    int hour, minute, second;

    public:
    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }
    Time(int h, int m, int s)
    {
        hour=h;
        minute=m;
        second=s;
    }
    ~Time()
    {
        cout<<"destructor is called\n";
    }
    void getTime()
    {
        cout<<"Hour "<<hour;
        cout<<" Minute "<<minute;
        cout<<" Second "<<second<<endl;
    }
    void setTime(int *h,int *m,int *s)
    {
        hour=*h;
        minute=*m;
        second=*s;
    }
    void calcTimeDifference(Time t1,Time t2)
    {
        // Time temp;
        if(t1.hour>t2.hour && t1.minute>t2.minute && t1.second>t2.second)
        {
            cout<<"hi";
            this->hour=t1.hour-t2.hour;
            this->minute=t1.minute-t2.minute;
            this->second=t1.second-t2.second;
        }
        else if(t1.hour>t2.hour && t1.minute>t2.minute && t1.second<t2.second)
        {
            this->hour=t1.hour-t2.hour;
            this->minute=t1.minute-t2.minute-1;
            this->second=t1.second-t2.second+60;
        }
        else if(t1.hour>t2.hour && t1.minute<t2.minute && t1.second>t2.second)
        {
            this->hour=t1.hour-t2.hour-1;
            this->minute=t1.minute-t2.minute+60;
            this->second=t1.second-t2.second;
        }
        else if(t1.hour>t2.hour && t1.minute<t2.minute && t1.second<t2.second)
        {
            this->hour=t1.hour-t2.hour-1;
            this->minute=t1.minute-t2.minute+60-1;
            this->second=t1.second-t2.second+60;
        }
        
    }
    void resetTime()
    {
        hour=0;
        minute=0;
        second=0;
    }
};

int main()
{
    Time t1(12,45,40),t2(10,39,27),t3;
    t1.getTime();
    t2.getTime();
    t3.calcTimeDifference(t1,t2);
    t3.getTime();
    return 0;
}