#include<bits/stdc++.h>
using namespace std;
void solve(int i,int n,vector<int>&arr, vector<vector<int>>&ans, vector<int>&res, int tar){
  	  if(tar==0){
		  ans.push_back(res);
	      return;
     }
  for(int j=i; j<n; j++){
	  if(j>i && arr[j]==arr[j-1]){
		  continue;
	  }
	  if(arr[j]>tar){
         break;
	  }
	  res.push_back(arr[j]);
	  solve(j+1,n,arr,ans,res,tar-arr[j]);
	  res.pop_back();
  }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target){
	 vector<vector<int>>ans;
     vector<int>res;
     sort(arr.begin(),arr.end());
     solve(0,n,arr,ans,res,target);
       return ans;
}
