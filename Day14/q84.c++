#include <bits/stdc++.h> 
class Stack {
	// Define the data members.
 queue<int>q1,q2;
 int size;
   public:
    Stack() {
        // Implement the Constructor.
        size=0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
        // Implement the getSize() function.
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        if(size==0){
            return true;
        }
        return false;
    }

    void push(int element) {
        q2.push(element);
        while(q1.empty()==false){
            int val=q1.front();
            q1.pop();
            q2.push(val);
        }
        swap(q1,q2);
        size++;
    }

    int pop() {
        if(q1.empty()==false){
            int val=q1.front();
            q1.pop();
            size--;
            return val;
        }
        return -1;
    }

    int top() {
        if(q1.empty()==false){
           return q1.front();
        }
        return -1;
    }
};