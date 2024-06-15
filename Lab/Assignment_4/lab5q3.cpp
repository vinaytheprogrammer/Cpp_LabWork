#include<bits/stdc++.h>
using namespace std;

class MyDate
{
    public:
    int date;
    int month;
    int year;
};

class Employee
{
int empno;
double salary;
MyDate doj;

public:
Employee(int x,MyDate m,double s)
{
    empno=x;
    // doj=m;
    doj.date=m.date;
    doj.month=m.month;
    doj.year=m.year;

    salary=s;
}
Employee(const Employee &emp)
{
    empno=emp.empno;
    doj.date=emp.doj.date;
    doj.month=emp.doj.month;
    doj.year=emp.doj.year;

    salary=emp.salary;
    
}
void setEmpdata(int x,MyDate m,double s)
{
    empno=x;
    // doj=m;
    doj.date=m.date;
    doj.month=m.month;
    doj.year=m.year;

    salary=s;
}
void showEmpdata()
{
 cout<<"Employee No : "<<empno<<endl;
 cout<<"Date of Joining : "<<doj.date<<" "<<doj.month<<" "<<doj.year<<endl; 
 cout<<"Salary : "<<salary<<endl;  
}
 friend void taxpayble(Employee& e);
};

void  taxpayble(Employee& em)
{
    cout<<"Tax Emplies: "<<endl;
    if(em.salary<100000)
    {
        cout<<"No Tax "<<endl;

    }
    else if(em.salary>=100000  && em.salary<200000)
    {
        cout<<"Tax : "<<em.salary*.1<<endl;
    }
    else if(em.salary>=200000 && em.salary<500000)
    {
        cout<<"Tax : "<<em.salary*.15<<endl;
    }
    else if(em.salary>=500000)
    {
        cout<<"Tax : "<<em.salary*.2<<endl;
    }
}


int main()
{
    Employee e(1,{4,2,3},100004);
    e.showEmpdata();
    taxpayble(e);

    cout<<endl;

    Employee e2(e);
    e2.showEmpdata();
    taxpayble(e2);
 return 0;   
}