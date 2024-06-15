#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int x,y;
    public:
    Complex(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    Complex(Complex &c)
    {
        x=c.x;
        y=c.y;
    }
    void print()
    {
        cout<<x<<"+ i"<<y;
    }
}; 

template<typename T> 
class Array
{
    private:
        T* ptr;
        int size;
    public:
        Array(T arr[],int n);
        void print();
};
//Define Outside A Class
template<typename T> Array <T> :: Array(T  arr[],int n)
{
    ptr = new T[n];
    size = n;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
} 

template <typename T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}


int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    char ar[5]={'a','b','c','d','e'};
    string aa[4]={"Vinay","Shashwat","Adarsh","Devrat"};
    double aaa[5]={1.2,2.3,3.4,44.5,4.5};
    Complex complex[5]{{1,2},{2,3},{3,4},{4,5},{5,6}};
    
    // Complex c(1,2);
    

    // CAlling Different type of Data
    Array<int> inte(arr, 5);
    Array<char> charr(ar, 5);
    Array<string> stringg(aa, 4);
    Array<double> doubly(aaa, 5);
    Array<Complex> complexx(complex,5);

    inte.print();
    charr.print();
    stringg.print();
    doubly.print();


return 0;
}