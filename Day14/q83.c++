#include <bits/stdc++.h> 
class Queue {
public:
int *arr;
int i;
int j;
int size;
    Queue() {
        size=5000;
        arr=new int[5000];
        i=0;
        j=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(i==j){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
       if(j==size){
           return;
       }
        else{
            arr[j]=data;
            j++;
        }
    }

    int dequeue() {
       if(i==j){
           return -1;
       }
       else{
           int ans=arr[i];
           arr[i]=-1;
           i++;
           if(i==j){
               i=0;
               j=0;
           }
           return ans;
       }
    }

    int front() {
        if(i==j){
            return -1;
        }
        return arr[i];
    }
};