#include<bits/stdc++.h>
using namespace std;

class FamilyMember
{
    protected:
    string name,familyname , origin;
    public:
     FamilyMember(string n,string fn,string o)
     {
        name=n;
        familyname=fn;
        origin=o;
     }
     ~FamilyMember()
     {
        cout<<"Destructor 1 is called ";
     }
     void about()
     {
        cout<<"Name : "<<name;
        cout<<"Family Name : "<<familyname;
        cout<<"Origin : "<<origin;

     }

};

class Citizen
{
    protected:
    string name,country;
    int year;
    public:
     Citizen(string n,string fn,int  o)
     {
        name=n;
        country=fn;
        year=o;
     }
     ~Citizen()
     {
        cout<<"Destructor 2 is called ";
     }
     void about()
     {
        cout<<"Name : "<<name;
        cout<<"Country Name : "<<country;
        cout<<"Year : "<<year;

     }

};


class Employee : public FamilyMember ,Citizen
{
    private:
    string name;
    
    public:
     Employee(string n,string fn,int  o)
     {
        name=n;
        country=fn;
        year=o;
     }
     ~Employee()
     {
        cout<<"Destructor 2 is called ";
     }
     void about()
     {
        cout<<"Name : "<<name;
        cout<<"Country Name : "<<country;
        cout<<"Year : "<<year;

     }

};

int main()
{

return 0;
}