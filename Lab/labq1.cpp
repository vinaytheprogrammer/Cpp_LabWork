#include<bits/stdc++.h>
using namespace std;

struct KYC{
string name,dob,pan_no,aadhar_no,address;
int annual_income,saving;

// input_data(string name,string dob,string pan_no,string aadhar_no,string address,int annual_income,int saving)
// {
// name=name;
// dob=dob;
// pan_no=pan_no;
// aadhar_no=aadhar_no;
// address=address;
// annual_income=annual_income;
// saving=saving;
// }
void output_data()
{
    cout<<name<<"\t";
    cout<<dob<<"\t";
    cout<<pan_no<<"\t";
    cout<<aadhar_no<<"\t";
    cout<<address<<"\t";
    cout<<annual_income<<"\t";
    cout<<saving<<"\t";

}
void compute_income_tax(int annual_income,int saving){
  if(annual_income<=500000)
   cout<<"Income Tax is "<<"0";
   else if(annual_income>500000 && annual_income<=1000000 && saving<=150000)
   cout<<"Income Tax is "<<(annual_income-saving)*.10;
   else if(annual_income>1000000 && saving<=150000)
   cout<<"Income Tax is "<<(annual_income-saving)*.2;

}

};

int main()
{
KYC bachha[8];

bachha[0].name="vinay";
bachha[0].dob="10/08/2000";
bachha[0].pan_no="CWDPG1967Q";
bachha[0].aadhar_no="2344456687669877";
bachha[0].address="nit jamshedpur";
bachha[0].annual_income=345677;
bachha[0].saving=90000;

bachha[1]={"radhe","01/01/2001","vghf2578q","3457658764573876","nit raipur",345854,98756};

bachha[2]={"shyam","02/01/2001","hsvdf2578q","34576545674573876","nit kuruk",123546,234522};

bachha[3]={"mohan","03/01/2001","vdfd2578q","3457658764573876","nit trichy",123456,23456};

bachha[4]={"krishna","04/01/2001","fdhf2578q","3457658764573876","nit pragraj",2437854,22756};

bachha[5]={"arjun","05/01/2001","dfgh2578q","3457658764573876","nit calicut",547372,12236};

bachha[6]={"prince","06/01/2001","vghf3458q","3457658764573876","nit warranggal",567854,10956};

bachha[7]={"adarsh","07/01/2001","vghf5678q","3457658764573876","nit patna",3345674,90756};

// for(int i=0;i<=7;i++)
// bachha[i].input_data(string name,string dob,string pan_no,string aadhar_no,string address,int annual_income,int saving);

for(int i=0;i<=7;i++)
{
    bachha[i].output_data();
    cout<<"\n\n\n";
}

for(int i=0;i<=7;i++)
{
    bachha[i].compute_income_tax(bachha[i].annual_income, bachha[i].saving);
    cout<<"\n";
}

return 0;
}