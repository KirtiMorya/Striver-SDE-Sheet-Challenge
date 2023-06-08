/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *addTwoNumbers(Node *num1, Node *num2)
{
    Node* head=new Node(-1);
    Node* dummy=head;
    int carry=0;
    while(num1!=NULL || num2!=NULL || carry!=0){
        int sum=0;
        if(num1!=NULL){
            sum+=num1->data;
            num1=num1->next;
        }
        if(num2!=NULL){
            sum+=num2->data;
            num2=num2->next;
        }
        sum+=carry;
        carry=sum/10;
        Node* node=new Node(sum%10);
        dummy->next=node;
        dummy=dummy->next;
         
    }
    // if(carry!=0){
    //     dummy->next=new Node(carry%10);
    //     carry/=10;
    // }
    return head->next;
}
