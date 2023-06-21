#include<bits/stdc++.h>
class Queue {
    stack<int>s1;
    stack<int>s2;
    int size;
    public:
    Queue() {
        size=0;
    }

    void enQueue(int val) {
        s1.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
        if(s2.empty()==false){
            int val=s2.top();
            s2.pop();
            return val;
        }
        else{
            if(s1.empty()==true){
                return -1;
            }
            else{
                while(s1.empty()==false){
                    s2.push(s1.top());
                    s1.pop();
                }
                int val=s2.top();
                s2.pop();
                return val;
            }
        }
    }

    int peek() {
          if(!s2.empty()){
            return s2.top();;
        }
        else{
            if(s1.empty()){
                return -1;
            }
            else{
                while(!s1.empty()){
                    s2.push(s1.top());
                    s1.pop();
                }
                return s2.top();;
            }
        }
    }

    bool isEmpty() {
        if(s1.empty()==true && s2.empty()==true){
            return true;
        }
        return false;
    }
};