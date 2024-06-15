#include<bits/stdc++.h>
#include<string>
using namespace std;


struct student
{
    string name,reg_no;
    int marks[5];
    struct date
    {
        string dob;
    }s2;
    struct address
    {
        string add;
    }s3;
};

typedef struct student s1;
//typedef struct ;
// typedef struct ;

int main()
{
s1 p1[11];  // structure pointer variables are not working in this case

p1[0]={"viany","008",{1,2,2,3,2},"10/07/100","A587 hostel-k, Nit jamshedpur"};
// cout<<*(p1.marks)+1;
p1[1]={"aadhar kumar jha","010",{13,23,24,35,26},"10/07/100","A507 hostel-k, Nit jamshedpur"};
p1[2]={"aadharsh kumar","109",{12,23,24,35,27},"10/07/100","A507 hostel-k, Nit jamshedpur"};
p1[3]={"shashwat tiwari","007",{16,26,2,3,2},"10/07/100","A508 hostel-k, Nit jamshedpur"};
p1[4]={"vidhya sagar","074",{14,2,2,36,2},"10/07/2000","A509 hostel-k, Nit jamshedpur"};
p1[5]={"hemendra kumar","065",{16,2,26,3,2},"10/07/100","A510 hostel-k, Nit jamshedpur"};
p1[6]={"devrat","009",{15,2,2,3,26},"10/07/100","A527 hostel-k, Nit jamshedpur"};
p1[7]={"manish","047",{15,2,25,3,2},"10/07/100","A537 hostel-k, Nit jamshedpur"};
p1[8]={"hitesh","024",{15,25,2,3,2},"10/07/100","A557 hostel-k, Nit jamshedpur"};
p1[9]={"deepsen","037",{1,52,2,3,2},"10/07/100","A567 hostel-k, Nit jamshedpur"};
p1[10]={"shivank","013",{1,25,2,3,2},"10/07/100","A577 hostel-k, Nit jamshedpur"};


for(int i=0;i<10;i++)
{
    for(int j=0;j<10-i;j++)
    {
        if(stoi(p1[j].reg_no) > stoi(p1[j+1].reg_no))
        swap(stoi(p1[j]), stoi(p1[j+1]));
    }
}


return 0;
}