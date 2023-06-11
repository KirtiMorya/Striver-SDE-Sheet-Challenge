#include<bits/stdc++.h>
using namespace std;
 class Node {
  public:
		int data;
		Node *next;
 		Node *child;
		Node() : data(0), next(nullptr), child(nullptr){};
		Node(int x) : data(x), next(nullptr), child(nullptr) {}
		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
  };
 
Node* merge(Node*h1,Node*h2){
	if(h1==NULL){
		return h2;
	}
	if(h2==NULL){
		return h1;
	}
	Node*temp=new Node(0);
	Node* res=temp;
   while(h1!=NULL && h2!=NULL){
	   if(h1->data<h2->data){
          temp->child=h1;
		  
		  temp=temp->child;
		  h1=h1->child;
	   }
	   else{
		    temp->child=h2;
		
		  temp=temp->child;
		    h2=h2->child;
	   }
   }
   if(h1){
	   temp->child=h1;
	   temp=h1;
	   h1=h1->next;
   }
   else{
	   temp->child=h2;
	   temp=h2;
	   h2=h2->next;
   }
   res=res->child;
   return res;
}
Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head==NULL){
		return head;
	}
	Node* curr=head;
	Node* temp=head->next;
	curr->next=NULL;
	temp=flattenLinkedList(temp);
	Node* ans=merge(curr,temp);
	return ans;
}

