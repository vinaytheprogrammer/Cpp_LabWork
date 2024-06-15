#include<bits/stdc++.h>
#define MAX 5
using namespace std;

//Circular Queve


class circular_array
{
    int cqueve[MAX];
    int front,rear;

    public:

    //a constructor is created to initilize the variables
    circular_array()
    {
        front=-1;
        rear=-1;
    }

    //public function declaration
    void insert();
    void del();
    void display();

};


//Function to insert an element to the circular array/queue

void circular_array::insert()
{
    int item;

    //overflow condition
    if((front==0 && rear==MAX-1) || (front == rear+1))
        {
            cout<<"\nQueve Overflow\n\n";
            return ;
        }
    if(front==-1)//if queve is empty
        {
            front =0;
            rear=0;
        }
    else 
        // if(rear == MAX-1)
        //     rear=0;
        // else
            rear=(rear+1)%MAX;
    cout<<"\nInput the element for insertion in queue:" ;
    cin>>item;
    cqueve[rear]=item;
}


void circular_array::del()
{


    //checking for queve underflow
    if(front==-1)
    {
        cout<<"\nQueue Underflow";
        return;
    }
    cout<<"\nElement deleted from queue is: "<<cqueve[front]<<"\n";
    if(front==rear) //queue has only one element
    {
        front =-1;
        rear=-1;
    }
    else    
        // if(front==MAX-1)
        //     front =0;
        // else
            front =(front+1)%MAX;
}


void circular_array::display()
{
    int front_pos=front;
    int rear_pos=rear;

    //checking whether the queve is empty or not
    if(front ==-1)
    {
        cout<<"\nQueve is empty";
        return ;
    }

    //Displaying the queve element
    cout<<"\nQueve elements:\n";
    if(front_pos<=rear_pos)
    {
        while(front_pos<=rear_pos)
        {
            cout<<cqueve[front_pos]<<" ";
            front_pos++;
        }
    }
    else
    {
        while(front_pos<=MAX-1)
        {
            cout<<cqueve[front]<<" ";
            front_pos++;
        }
        front_pos=0;
        while(front_pos<=rear_pos)
        {
            cout<<cqueve[front_pos]<<" ";
            front_pos++;
        }
    }
    cout<<"\n";
}
int main()
{
    int ch;

    circular_array co;

    while(1)
    {
        // clrscr();
        cout<<"\n1.INSERT";
        cout<<"\n2.delete";
        cout<<"\n3.display";
        cout<<"\n4.quit";
        cout<<"\nEnter your choice\n";
        cin>>ch;

        switch(ch)
        {
            case 1:
                co.insert();
                break;
            case 2:
                co.del();
                break;
            case 3:
                co.display();
                break;
            default:
                cout<<"\nWrong choice\n";
                break;
        }


    }

 return 0;   
}