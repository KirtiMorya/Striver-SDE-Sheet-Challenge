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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    LinkedListNode<int>*temp=head;
    LinkedListNode<int>*prev=NULL;
    LinkedListNode<int>*next=NULL;
     while(temp!=NULL){
         next=temp->next;
         temp->next=prev;
          prev=temp;
          temp=next;
          
     }
     return prev;
    
}