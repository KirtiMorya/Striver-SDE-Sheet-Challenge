#include <bits/stdc++.h> 

vector<int> nextGreater(vector<int> &arr, int n) {
   stack<int>st;
   vector<int>vt(n,-1);
   int i=n-2;
   st.push(arr[n-1]);
   while(i>=0){
       while(st.empty()==false && arr[i]>=st.top()){
           st.pop();
       }
       if(st.empty()==true){
           vt[i]=-1;
       }
       else{
           vt[i]=st.top();
       }
       st.push(arr[i]);
       i--;
   }
   return vt;

}