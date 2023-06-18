#include<bits/stdc++.h>
using namespace std;
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
	// priority_queue<int>pq;
	// priority_queue<int,vector<int>,greater<int>>pq1;
    // for(auto it:arr){
	// 	pq.push(it);
	// 	pq1.push(it);
	// 	if(pq.size()>k){
	// 		pq.pop();
	// 	}
	// 	if(pq1.size()>k){
	// 		pq1.pop();
	// 	}
	// }
	// int small=pq.top();
	// int large=pq1.top();
	// return {small,large};
	sort(arr.begin(),arr.end());
	return {arr[k-1],arr[n-k]};
}