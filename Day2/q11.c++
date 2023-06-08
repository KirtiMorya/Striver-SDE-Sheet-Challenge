#include <bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int>ans;
	int freq[n+1]={0};
	for(int i=0; i<n; i++){
        freq[arr[i]]++;
	}
	for(int i=1; i<=n; i++){
		//cout<<freq[i]<<" ";
		if(freq[i]==0){
			ans.first=i;
		}
        if(freq[i]>1){
			ans.second=i;
		}
		
	}
	return ans;
	
}
