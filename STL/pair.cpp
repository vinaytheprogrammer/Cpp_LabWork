#include<iostream>
using namespace std;

int stack[5],top=-1;
void push(int);
void peek();
void pop();
void change();
//void print(int);

int main()
{
	int ch,in=0;
	while(in!=1)
	{
		cout<<"\nEnter choice for performing an operation\n";
	cout<<" Press 1 for push ";
	cout<<"\n Press 2 for peeping";
	cout<<"\n Press 3 for poping";
	cout<<"\n press 4 for change/print\n";
	cin>>ch;
    switch (ch)
	{
	case 1:
	{
		int a;
		cout<<"input a number (pushing) ";
		cin>>a;
		push(a);
		break;

	}
	case 2:
	{
		cout<<"number on top of the stack (peeping) ";
		peek();
		break;
	}
	case 3:
	{
		pop();
		cout<<"last number in stack is deleted";
		break;
	}
	case 4:
	{
		change();
		break;
	}
	// default:
	// 	print();
	// 	break;
	}

	}

	return 0;
}

void push(int a)
{
	top++;
	stack[top]=a;
}

void peek()
{
	if(top==-1)
	cout<<"stack is empty";
	else
	cout<<stack[top];
	
}
void pop()
{
	if(top==-1)
	cout<<"stack is empty";
	else{
	    stack[top]=0;
		top--;
	}
}

void change()
{
   // int n=sizeof(stack)/sizeof(stack[0]);
    
for(int i=0;i<5;i++)
cout<<stack[i]<<" \n";
}