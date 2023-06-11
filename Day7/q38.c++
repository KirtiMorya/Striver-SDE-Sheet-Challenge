#include <bits/stdc++.h>

/*************************************************************

    Following is the LinkedListNode class structure

    template <typename T>   
    class LinkedListNode
    {
        public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode<T> *random;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*************************************************************/

LinkedListNode<int> *cloneRandomList(LinkedListNode<int> *head)
{
    // Write your code here.
    if(head==NULL){
        return nullptr;
    }
    LinkedListNode<int> *copy=head;
    LinkedListNode<int>* next;
    while(copy!=NULL){
        next=copy->next;
        LinkedListNode<int>*node=new LinkedListNode<int>(copy->data);
        copy->next=node;
        copy->next->next=next;
        copy=copy->next->next;
    }
    LinkedListNode<int>* curr=head;
    while(curr!=NULL){
        if(curr->random!=NULL){
            curr->next->random=curr->random->next;
        }
        else{
            curr->next->random=NULL;
        }
           curr= curr->next->next;
     }
    LinkedListNode<int>* original=head;
    copy=head->next;
    LinkedListNode<int>* temp=copy;
    while(copy!=NULL && original!=NULL){
         if(original->next!=NULL){
             original->next=original->next->next;
         }
         else{
             original->next=original->next; 
         }
         if(copy->next!=NULL){
             copy->next=copy->next->next;
         }
         else{
             copy->next=copy->next; 
         }
         copy=copy->next;
         original=original->next;
    }
    return temp;
}
