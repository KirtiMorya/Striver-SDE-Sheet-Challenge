#include <bits/stdc++.h> 
// Stack class.
class Stack {
public:
    int *arr;
    int cap;
    int t;
    Stack(int capacity) {
        t=-1;
        arr=new int[capacity];
        cap=capacity;
    }

    void push(int num) {
         
        if(isFull()){
          return;
        }
        t++; 
        arr[t]=num;    
        
    }

    int pop() {
        if(isEmpty()){
          return -1;
        }
        int x=arr[t];
        t--;
        return x;
       
    }
    
    int top() {
        if(isEmpty()){
          return -1;
        }
        return arr[t];
    }
    
    int isEmpty() {
        if(t==-1){
          return 1;
        }
        return 0;
    }
    
    int isFull() {
        if(t-1==cap){
          return 1;
        }
        return 0;
    }
    
};