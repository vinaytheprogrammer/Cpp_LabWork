#include<bits/stdc++.h>
using namespace std;

class Number
{
 int num;
 public:
 Number()
 {
    num=0;
 }   
 Number(int l)
 {
    num=l;
 }
 ~Number()
 {
    cout<<"object destroyed for class Num\n";
 }
 int getNumber()   // Accessor
 {
    return num;
 }
 void changeNumber(int m)  // Mutator
 {
    num=m;
 }
 bool isArmstrong()
 {
    int n=num,r,temp=0,digit=0,to=num;
    if(to==0)
        digit=1;
    else
        {
            while(to!=0)
            {
            to=to/10;
            digit++;    
            }
        }
    while(n!=0)
    {
        r=n%10;
        temp+=pow(r,digit);
        n=n/10;
    }
    if(num==temp)
        return 1;
    else 
        return 0;
 }
 
 bool isPrime()
 {
    int n=num;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
       
    }
    return 1;
 }
 int nextCoprime()
 {
    return num+1;
 }
 int reverse()
 {
    int n=num,r,temp=0,digit=0,to=num;
    if(to==0)
        digit=1;
    else
        {
            while(to!=0)
            {
            to=to/10;
            digit++;    
            }
        }
        digit--;
    while(n!=0)//1634
    {
        r=n%10;//1
        // cout<<r<<"    ";
        temp+=r*pow(10,digit);
        // cout<<temp<<" ";
        digit--;
        n=n/10;
    } 
    return temp;
 }

};


int main()
{
    Number obj(345678);
   
    obj.changeNumber(1634);
    cout<<obj.getNumber()<<endl;
    cout<<obj.isArmstrong()<<endl;
    cout<<obj.isPrime()<<endl;
    cout<<obj.nextCoprime()<<endl;
    cout<<obj.reverse()<<endl;
 
    return 0;
}