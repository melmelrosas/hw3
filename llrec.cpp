#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************



// create the linked list 
// cover the base cases and 

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot){
// base case when empty

if(head==NULL){
  smaller = NULL;
  larger = NULL;
  return;



}


Node* curr = head;
head = head->next;

//call the functuion again and split

  llpivot(head, smaller, larger, pivot);


// follow thru the order
      if(curr->val <= pivot){
  curr->next = smaller;
        smaller = curr;

} else{
  curr->next = larger;
  larger = curr;
}

}

