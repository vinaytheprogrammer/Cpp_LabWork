#include<bits/stdc++.h>
using namespace std;

class Exception
{
    public:
    string s;

    Exception( string s)
    {
        this->s=s;
    }
};
int main()
{
    int pos,a[5]={1,2,3,4,5};
    cout<<"Enter the Position you Want to ACcess ";
    cin>>pos;
try
{
    if(pos>4 || pos<0)
    {
        throw Exception("Array Out of Bound");
    }
    else{
        cout<<a[pos];
    }
}
catch(Exception &e)
{
    std::cerr << e.s << '\n';
}

return 0;
}


/*

#include <bits/stdc++.h>
using namespace std;

class MyException
{
public:
    string error;
    MyException(string s)
    {
        error = s;
    }
};

int main()
{
    try
    {
        int arr[5];
        int val, pos;
        cout << "Enter value to enter: ";
        cin >> val;
        cout << "Enter position to enter: ";
        cin >> pos;
        if (pos > 4 || pos < 0)
            throw MyException("Error: index out of bounds.");
        arr[pos] = val;
        cout << "Value: " << arr[pos] << endl;
    }
    catch (MyException &e)
    {
        cerr << e.error << endl;
    }
    return 0;
}


*/