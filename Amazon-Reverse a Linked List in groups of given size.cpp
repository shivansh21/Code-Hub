/* Given a linked list, write a function to reverse every k nodes (where k is an input to the function).
If a linked list is given as 1->2->3->4->5->6->7->8->NULL and k = 3 then output will be 3->2->1->6->5->4->8->7->NULL -- AMAZON, PAYTM etc */

// @ author - Shivansh Shamra

/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by Online Judge.*/


/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
  struct node
  {
     int data;
     struct Node *next;
  }
*/
struct node *reverse (struct node *head, int k)
{ 
  // Complete this method
  int i;
  node  *curr, *prev, *nxt;
  curr = head;
  prev = NULL;
  if(head==NULL) return NULL;
 
      i=0;
      while(i<k && curr!=NULL){
          nxt = curr->next;
          curr->next = prev;
          prev = curr;
          curr = nxt;
          i++;
      }
    head->next = reverse(curr,k);
    return prev;
  
}
