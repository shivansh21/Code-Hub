/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/
// @ author => Shivansh Sharma
// Function problem => HackerRank

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    Node *slow, *fast;
   if(head==NULL) return 0;
    slow = head;
    fast = head->next;
    while(true){ //infinite loop
        if(!fast || !fast->next){
            return 0;
        }
        else if(fast==slow || fast->next==slow){
            return 1;
        }
        else{
            slow=slow->next;
            fast = fast->next->next;
            }
    }   
}
