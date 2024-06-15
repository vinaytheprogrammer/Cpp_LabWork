#include<bits/stdc++.h>
using namespace std;
class Account
{
    int accountno,balance;
    static int totalbal;
    public:
    Account(int ac,int bal)
    {
        accountno=ac;
        balance=bal;
    }
    ~Account()
    {
        cout<<"Destructor is called\n";  // something else
    }
    void deposite(int amount){
        balance+=amount;
        cout<<"balance after "<<amount<<" deposite: "<<balance<<endl;
        
        totalbal+=amount;
    }
    void withdraw(int amount)
    {
        if((balance-amount)<0)
        {
            cout<<"Balance is not sufficient\n";
            return;
        }
        else{
            balance-=amount;
        cout<<"balance after "<<amount<<" withdraw: "<<balance<<endl;

            totalbal-=amount;
        }
    }
    static void addtobank(int amount)
    {
        totalbal+=amount;               // cout<<accountno++;   --- not allowed
        cout<<"totalbal after addding "<<amount<<" money : "<<totalbal<<endl;

    }
    static void deductfrombank(int amount)
    {
        totalbal-=amount;
        cout<<"totalbal after withdrawing "<<amount<<" money : "<<totalbal<<endl;
    }

};

int Account:: totalbal;   // int Account:: totalbal=0;   is not required
int main()
{
    Account ac1(1000,500),ac2(1000,500),ac3(1000,500);
    ac1.deposite(500);
    ac1.withdraw(100);
    Account :: addtobank(500);
    Account ::deductfrombank(100);
    cout<<"\n";
    ac2.deposite(500);
    ac2.withdraw(100);
    Account ::addtobank(500);
    Account ::deductfrombank(100);    
    cout<<"\n";
    ac3.deposite(500);
    ac3.withdraw(100);
    Account ::addtobank(500);
    Account ::deductfrombank(100);    
    cout<<"\n";
    return 0;
}