#include <bits/stdc++.h>

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    
    Node<int>* h1=first;
    Node<int>* h2=second;
    Node<int>* ans;
    Node<int>* head=ans;
    if(first==NULL && second==NULL){
        return NULL;
    }
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }
    if(h1->data<h2->data){
        head=ans=h1;
        h1=h1->next;
    }
    else{
        head=ans=h2;
        h2=h2->next;
    }
    
    
    while(h1!=NULL && h2!=NULL){
          if(h1->data<h2->data){
              ans->next=h1;
              ans=h1;
              h1=h1->next;
          }
          else{
              ans->next=h2;
              ans=h2;
              h2=h2->next;
          }
    }
    if(h1!=NULL){
        ans->next=h1;
       
    }
    if(h2!=NULL){
        ans->next=h2;
    }
    return head;
}
