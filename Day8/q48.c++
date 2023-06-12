#include<bits/stdc++.h>
int maximumActivities(vector<int> &s, vector<int> &f) {
    // Write your code here.
    vector<pair<int,int>>vt;
    for(int i=0; i<s.size(); i++){
         vt.push_back({f[i],s[i]});
    }
    sort(vt.begin(),vt.end());
    int count=1;
    int limit=vt[0].first;
    for(int i=1; i<s.size(); i++){
       if(limit<=vt[i].second){
           limit=vt[i].first;
           count++;
       }
    }   
    return count;
}