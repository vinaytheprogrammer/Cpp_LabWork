#include<bits/stdc++.h>
using namespace std;

class VegCuisine
{
    protected:
        int cost;
        string name;
        
    public:
        VegCuisine( int c=0,string n="")
        {
            cost=c;
            name=n;
            
        }
        ~VegCuisine()
        {
            cout<<"Vegcuisine Destructor is Called "<<endl;
        }
        void printData()
        {
            cout<<"Cost : "<<cost<<" ,Name : "<<name<<endl;
        }
};

class NonVegCuisine 
{
    protected:
        int cost;
        string  name;
    public:
        NonVegCuisine(int c=0,string n="")
        {
            cost=c;
            name=n;
        }
        ~NonVegCuisine()
        {
            cout<<"NonVegCuisine Destructor is Called "<<endl;
        }

        void printData()
        {
            cout<<"Cost : "<<cost<<" ,Name : "<<name<<endl;
        }
};

class ComboCuisine : public VegCuisine , NonVegCuisine
{
    string name; // same name of variable in base an derive class --no problem  
    public:
        ComboCuisine(string s="")
        {
            name=s;

        }
        ~ComboCuisine()
        {
            cout<<"Combo Cuisine Destructor is Called "<<endl;
        }
        void printData()
        {
            
            cout<<"Combo Cuisine  : "<<name<<endl;
        }
};
int main()
{
VegCuisine *s=new VegCuisine(800,"Adash Veg kabbab");
NonVegCuisine *e=new NonVegCuisine(1000,"Kabbab");
ComboCuisine *ws=new ComboCuisine("Shivam kabbab");
s->printData();
e->printData();
ws->printData();
return 0;
}