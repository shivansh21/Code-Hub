/*Given two numbers represented by two lists, write a function that returns sum list. The sum list is list representation of addition of two input numbers.

Suppose you have two linked list 5->4 ( 4 5 )and 5->4->3( 3 4 5) you have to return  a resultant linked list 0->9->3 (3 9 0).*/
// @ author - Shivansh Sharma

/* In this problem, method takes two argument: the head of the first and second linked list. The function should not read any input from stdin/console.
The struct Node has a data part which stores the data and a next pointer which points to the next element of the linked list. 
There are multiple test cases. For each test case, this method will be called individually. */

/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by Online Judge.*/


/*struct Node
{
    int data;
   Node* next;
}; */
#include<list>

  list<int> l1;
  list<int> l2;
  list<int> l3;
  
//write a function returns the resultant linked list
Node*  addTwoLists(Node* first, Node* second){
  // Code here
  
  while(first!=NULL){
      l1.push_back(first->data);
      first= first->next;
  }
   while(second!=NULL){
      l2.push_back(second->data);
      second= second->next;
  }
  int carry = 0, num, num1;
  while(!(l1.empty()) && !(l2.empty())){
      num = l1.front() + l2.front() + carry;
      num1 = num%10;
      carry = num/10;
      l3.push_back(num1);
      l1.pop_front();
      l2.pop_front();
  }
 //  l3.push_back(carry);
  while(!(l1.empty())){
      num = l1.front() + carry;
      num1 = num%10;
      carry = num/10;
      l3.push_back(num1);
      l1.pop_front();
  }
 //  l3.push_back(carry);
  while(!(l2.empty())){
      num = l2.front() + carry;
      num1 = num%10;
      carry = num/10;
      l3.push_back(num1);
      l2.pop_front();
  }
  if(carry)
   l3.push_back(carry);
  
  Node *final = NULL;
  while(!(l3.empty())){
      Node *n = new Node();
      n->data = l3.back();
      n->next = final;
      final = n;
      l3.pop_back();
  }
  
  return final;
  
}
