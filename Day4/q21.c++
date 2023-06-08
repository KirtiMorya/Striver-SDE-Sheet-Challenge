#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int>st;
    for(auto it:arr){
        st.insert(it);
    }
    int ans=0;
    int res=0;
    for(auto it:arr){
         int val=it+1;
         if(st.find(it-1)!=st.end()){
             continue;
         }
         else{
             bool flag=false;
             res=1;
             while(flag!=true){
                 if(st.find(val)!=st.end()){
                     res++;
                     val++;
                 }
                 else{
                     ans=max(res,ans);
                     res=0;
                     flag=true;
                 }
             }
         }
    }
    return ans;
}