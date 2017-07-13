#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *next;
};
// Pointer to Node -
struct Node *head=NULL ,*nptr,*ptr, *ptr2;
 
// Insert elements in linked list
void Insert(int data){
	// new node-
	nptr = new Node();
	nptr->next = NULL;
	nptr->data = data;
	
	if(head == NULL){
		head = nptr;
	
	}
	
	else{
		ptr = head;
		while(ptr->next!=NULL){
			ptr = ptr->next;
		}
		ptr->next = nptr;
	}
}

// Reverse the linked list by iterative method
void Reverse(){
	struct Node* current,*prev, *next;
	current = head;
	prev = NULL;
	while(current!=NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
		
	}
	head = prev;
}

// Reverse the linked list by Recursive method
 
void Reverse2(struct Node*ptr2){
	    if(ptr2==NULL){
	    	return;
		}
		Reverse2(ptr2->next);
		cout<<ptr2->data<<" ";
}


// Display function
void Print(){
	ptr = head;
	while(ptr != NULL){
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
	cout<<endl<<endl;
}

// Driver function
int main(){
	int n,data;
	cout<<"How many elements you want to insert in linked list: ";
	cin>>n;
	cout<<"Enter the elements: \n";
	for(int i=0;i<n;i++){
		cin>>data;
		Insert(data);
	}
	cout<<"forward print\n";
	Print();   //forward print
	
/*	cout<<"\n\nReverse linked list\n";
	Reverse(); //reverse linked list by iterative method
	Print();    */
	
	// by recursive method
	cout<<"print linked list in reverse order\n";
	Reverse2(head);
	
}
