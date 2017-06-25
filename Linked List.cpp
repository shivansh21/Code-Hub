// How to search for a target key in a linked list? --->> through traversal

#include <bits/stdc++.h>
using namespace std;

// make a linked list

struct Node{

   int data;
   Node* next;
   
 };
  
 Node *head,*nptr,*ptr;
 Node* Insert(int data){
 //if list is empty:
  if(head==NULL)
   {
    head = new Node;
    head->data = data;
    head->next = NULL;
   }
   
   else{
    nptr = new Node;
    nptr->next = head;
    nptr->data = data;
    head = nptr;
      
  }
}
  // Traversal function:
  void display(){
  	ptr = head;
  	while(ptr!=NULL){
  		cout<<ptr->data<<endl;
  		ptr = ptr->next;
	  }
  }
  
  // Driver Function:
  int main()
  {
  	int n,data;
  	cout<<"Please Enter the size of list: ";
  	cin>>n;
  	cout<<"\nEnter the elements in linked list :\n ";
  	for(int i=0;i<n;i++){
  		cin>>data;
  		Insert(data);
	  }
	  cout<<"Printing the elements : \n";
	  display();
  	return 0;
  }
  
  
