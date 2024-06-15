// C++ program to understand difference between
// pointer to an integer and pointer to an
// array of integers.
#include <iostream>
using namespace std;
int main()
{
	// Pointer to an integer
	int *p;
	
	// Pointer to an array of 5 integers
	
	int arr[5]={1,2,3,4,5};
	int (*ptr)[5];
	// Points to 0th element of the arr.
	p = arr;
	
	// Points to the whole array arr.
	ptr = &arr;
	
	cout << "p =" << p <<", ptr = "<< ptr<< endl;
	p++;
	ptr++;
	cout << "p =" << p <<", ptr = "<< ptr<< endl;
	
	return 0;
}

// This code is contributed by SHUBHAMSINGH10
