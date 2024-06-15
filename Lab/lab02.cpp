#include<bits/stdc++.h>
//#define NULL 0
using namespace std;

//linked list

struct linkedlist
{
    char name[10];
    struct linkedlist *next;

};

typedef struct linkedlist node; // now "node" used instead of "struct linkedlist" :) 


int menu()
{
    int n;
    do
    {
    cout<<"Main Menu\n";
    cout<<"1- create the linked_list\n";
    cout<<"2 insert a component\n";
    cout<<"3- delete a component\n";
    cout<<"4- End\n";
    
    cin>>n;
    if(n<1 || n>4) 
        cout<<"Invalid Entry\n";

    } while (n<1 || n>4);
    return n;
}


void create(node *record)
// argument points to the current node
{
    cout<<"data item (type 'END' when finished): ";
    cin>>record->name;

    if(strcmp(record->name,"END")==0)
         record->next=NULL;
    else{
        
    //allocate space for next node
    record->next=(node *)malloc(sizeof(node));

    //create the next node
    create(record->next);
    }
    return ;
}



void display(node *record)
// display the linked list
{
    if(record->next != NULL)
    {
        cout<<"\n"<<record->name;
        display(record->next);
    }
    return ;
}




node *insert(node *first)
//add one component to the linked list return a pointer to beginning of the modified list
// argument ponits to the first node

{
    node *locate(node*,char[]);
    node *newrecord;//pointer to new node
    node *tag;// pointer to node before targate node
    char newitem[40];// new data item
    char target[40];// data item following the new enrty

    cout<<"new data item: ";
    cin>>newitem;
    cout<<"place before (type'END' if last): ";
    cin>>target;

    if(strcmp(first->name , target)==0){
        //new node first in this list

        //allocate space for new node
        newrecord = (node *)malloc(sizeof(node));

        //assign the new data item to newrecord->name
        strcpy(newrecord->name, newitem);

        //assign the current pointer to newrecord->next
        newrecord->next=first;

        //new pointer becomes the beginning of the list
        first = newrecord;
    
    }
    else{
        //insert new node after an existing node
        //loacte the node PREDING the target node

        tag = locate(first,target);
        if (tag == NULL) 
           printf("\nMatch not found - Please try again\n"); 
        else { 
        /* allocate space for the new node */ 
        newrecord = (node *) malloc(sizeof(node)); 
        /* assign the new data item to newrecord->item */ 
        strcpy(newrecord->name, newitem); 
        /* assign the next pointer to newrecord->next */ 
        newrecord->next = tag->next; 
        /* assign the new pointer to tag->next */ 
        tag->next = newrecord; 
    }
}
return (first);
}






node *locate(node *record, char target[]) /* locate a node */ 
    /* return a pointer to the node BEFORE the target node 
    The first argument points to the current node 
    The second argument is the target string */ 
{ 
    if (strcmp(record->next->name, target) == 0) /* found a match */ 
        return(record); 
    else 
        if (record->next->next == NULL) /* end of list */ 
            return(NULL); 
        else    
            locate(record->next, target); /* try next node */ 
}





node *remove(node *first) /* remove (delete) one component from the linked list 
return a pointer to beginning of the modified list */ 
/* argument points to the first node */ 
{ 
node *locate(node*, char[]); /* function declaration */ 
node *tag; /* pointer to node BEFORE target node */ 
node *temp; /* temporary pointer */ 
char target[40]; /* data item to be deleted */ 
printf("Data item to be deleted: "); 
scanf(" %[^\n]", target); 
if (strcmp(first->name, target) == 0) 
{
    /* delete the first node */ 
/* mark the node following the target node */ 
temp = first->next; 
/* free space for the target node */ 
free (first) ; 
/* adjust the pointer to the first node */ 
first = temp; 

}
else { 
/* delete a data item other than the first */ 
/* locate the node PRECEDING the target node */ 
tag = locate(first, target); 
if (tag == NULL) 
printf("\nMatch not found - Please try again\n");
else { 
/* mark the node following the target node */ 
temp = tag->next->next; 
/* free space for the target node */ 
free(tag->next); 
/* adjust the link to the next node */ 
tag->next = temp; 
}
} 
return(first); 
}








int main()
{
    node *start;
    int ch=menu();
  while(1)
  {
      switch(ch){
        case 1: //  create the linked list
            start =(node *)malloc(sizeof(node));
            create(start);
            cout<<endl;
            display(start);
            break;
        case 2:
            //add a component 
            start = insert(start);
            cout<<endl;
            display(start);
            break;
        case 3:
            //delete one component
            start= remove(start);
            cout<<endl;
            display(start);
            break;
        default:
            cout<<"End of computation\n";
            break;
    }
    // break;
  }
  
  
    return 0;
}