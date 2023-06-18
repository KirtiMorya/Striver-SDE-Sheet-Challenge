#include <bits/stdc++.h> 
using namespace std;
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	sort(b.begin(),b.end(),greater<int>());
	sort(a.begin(),a.end(),greater<int>());
	priority_queue<pair<int,pair<int,int>>>pq;
	set<pair<int,int>>st;
	vector<int>vt;
	pq.push({a[0]+b[0],{0,0}});
	st.insert({0,0});
	int curr_sum=0;
    while(k--){
        int sum=pq.top().first;
		int i=pq.top().second.first;
		int j=pq.top().second.second;
		vt.push_back(sum);
		pq.pop();
		 curr_sum=a[i]+b[j+1];
		if(st.find({i,j+1})==st.end()){
           st.insert({i,j+1});
		   pq.push({curr_sum,{i,j+1}});
		}
		 curr_sum=a[i+1]+b[j];
		if(st.find({i+1,j})==st.end()){
           st.insert({i+1,j});
		   pq.push({curr_sum,{i+1,j}});
		}
    }
	//O(NlogN);
	return vt;
}