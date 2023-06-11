/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */
//1 2 3 4
// 4 1 2 3
Node *rotate(Node *head, int k) {
     // Write your code here.
     if(head==NULL || head->next==NULL || k==0){
          return head;
     }
     int count=1;
     Node* temp=head;
     while(temp->next!=NULL){
        ++count;
        temp=temp->next;
     }
     temp->next=head;
     k=k%count;
     int x=count-k;
     while(x--){
          temp=temp->next;
     }
     head=temp->next;
     temp->next=NULL;
     return head;
}