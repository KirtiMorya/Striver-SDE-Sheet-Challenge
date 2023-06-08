/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int k)
{
    Node* temp=head;
    int count=1;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
  
    
    int n=count-k;
    Node* curr=new Node(-1);
    if(n==0  && count>1){
        return head->next;
    }
    if(n==0){
        return curr;
    }
    
    temp=head;
    Node* prev;
    while(n>0){
        prev=temp;
        temp=temp->next;
        n--;
    }
    prev->next=temp->next;
    return head;

    
}
