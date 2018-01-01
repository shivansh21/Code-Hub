// @ Shivansh Sharma ---

#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
};

struct Node  *root=NULL, *nptr, *ptr;   //initialize root node to null
int item,searching;
	
Node* newnode(int item){
    nptr = new Node();
    nptr->data = item;
	nptr->left = NULL;
	nptr->right = NULL;
	return nptr;

}
Node* Insert(Node *root, int item){
	if (root==NULL){
		root = newnode(item);
	}
	
	 else if(item <= root->data){
	     root->left = Insert(root->left,item);
	     
    }
     else{
     	root->right = Insert(root->right,item);
	 }
  return root;
}

bool search(Node *root, int item){
	if(root == NULL){
		return false;
	}
	else if(root->data == item){
		return true;
	}
	else if(item<=root->data){
		return search(root->left,item);
	}
	else{
		return search(root->right,item);
	}
}



int main()
{
	int n;
	bool p;
	cout<<"Enter how many values you want to insert: ";
	cin>>n;
	cout<<endl;
	cout<<"Please hit enter after giving the values..process will be taken care under experts..\n";
	
	for(int i=0;i<n;i++){
		cin>>item;
		root = Insert(root,item);
				
	}
	
	cout<<"Enter the item to be searched.. : ";
	cin>>searching;
	p = search(root,searching);
	if(p==true){
		cout<<endl<<"item found";
	}
	else{
		cout<<endl<<"not found";
	}
	return 0;
	
	
	
}
