#include<bits/stdc++.h>
using namespace std;

class Bicycle
{
    string frametype;
    int wheeldiameter;
    string handletype;
    
    public:
    void getData(string f,int wd,string ht)
    {
        frametype=f;
        wheeldiameter=wd;
        handletype=ht;
    }

    printData()
    {
        cout<<"FrameType : "<<frametype<<" ,WheelDiameter : "<<wheeldiameter<<" ,HandleType : "<<handletype<<endl;
    }
};

class MotorBike: public Bicycle
{
    int noofGear;
    int maxspeed,enginecapacity,meterreading,fuelconsumed;
public:
    void inputData()
    {
        cout<<"Enter No of Gear : ";
        cin>>noofGear;
        cout<<"\nEnter Max Speed of MotorBike : ";
        cin>>maxspeed;
        cout<<"\nEnter Engine Capacity : ";
        cin>>enginecapacity;
        cout<<"\nEnter MeterReading : ";
        cin>>meterreading;
        cout<<"\nEnter fuelConsumed : ";
        cin>>fuelconsumed; 
    }
    void printData()
    {
        cout<<endl<<endl;
        Bicycle :: printData();  //calling Base class printData
        cout<<"Grears : "<<noofGear<<" ,MaxSpeed : "<<maxspeed<<" ,EngineCapacity : "<<enginecapacity<<" ,MeterReading : "<<meterreading<<" ,FuelConsumed : "<<fuelconsumed<<endl;
    }
    void calmilage()
    {
        cout<<"Milage : "<<meterreading/fuelconsumed<<endl;
    }

};

int main()
{
MotorBike m;
m.getData("A",2,"V");
m.inputData();
m.printData();
m.calmilage();

return 0;
}