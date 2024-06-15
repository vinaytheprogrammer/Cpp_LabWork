#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    cout<<     (A > B ? (A > C ? A : C) : (B > C ? B : C));
    return 0;
}