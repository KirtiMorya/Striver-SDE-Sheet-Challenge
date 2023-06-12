#include <bits/stdc++.h> 
bool static comp(pair<int,int>&a, pair<int,int>&b){
      double r1=(double)a.second/(double)a.first;
      double r2=(double)b.second/(double)b.first;
      return r1>r2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
     sort(items.begin(),items.end(),comp);
     int curr=0;
     double profit=0;
     for(int i=0; i<n; i++){
       if(curr+items[i].first<=w){
           profit+=items[i].second;
           curr+=items[i].first;
       }
       else{
           double remain=w-curr;
           profit+=(items[i].second/(double)items[i].first)*remain;
           break;
       }
     }
     return profit;
}