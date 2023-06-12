#include <bits/stdc++.h> 
static bool comp(pair<int ,pair<int,int>>&a , pair<int,pair<int,int>>&b){
  if(a.first<b.first){
    return true;
  }
  else if (a.first>b.first){
       return false;
  }
  else if (a.second.second<b.second.second){
    return true;
  }
  return false;
}
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    
    vector<pair<int,pair<int,int>>>vt(start.size());
    for(int i=0; i<start.size(); i++){
      vt[i] = {end[i], {start[i], i + 1}};
    }
    sort(vt.begin(),vt.end(),comp);
    int limit=vt[0].first;
    vector<int>ans;
    ans.push_back(vt[0].second.second);
    for(int i=1;i<vt.size(); i++){
      if(vt[i].second.first>limit){
          limit=vt[i].first;
          ans.push_back(vt[i].second.second);
      }
    }
    return ans;
}