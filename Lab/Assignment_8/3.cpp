#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
int main() {
    string str;
    char ch;
    cout<<"You Wish to Enter Empty string : Y/N or y/n \n\n";
    cin>>ch;
    if(ch=='Y' || ch=='y')
        str="";
    else
    {
        cout<<"Enter String : ";
        cin>>str;
    }
    try {
        if(str=="")
        {
            throw "Empty String ";
        }
        string substr = str.substr(0, 1);
        
        cout << "Substring: From 0th letter to 1st letter " << substr << endl;
    } catch (const char* e) {
        cout << "Exception caught: " << e << endl;
    }
    return 0;
}
