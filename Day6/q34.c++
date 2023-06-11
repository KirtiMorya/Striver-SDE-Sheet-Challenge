#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* reverse(LinkedListNode<int>* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* next=NULL;
    LinkedListNode<int>* prev=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool isPalindrome(LinkedListNode<int> *head) {
  // Write your code here.
  if (head == NULL || head->next==NULL){
      return true;
  }
    LinkedListNode<int>* slow=head;
    LinkedListNode<int>* fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    slow->next=reverse(slow->next);
    slow=slow->next;
    LinkedListNode<int>*dummy=head;
    while(slow!=NULL){
        if(dummy->data!=slow->data){
            return false;
        }
        slow=slow->next;
        dummy=dummy->next;
    }
   return true;
    
}