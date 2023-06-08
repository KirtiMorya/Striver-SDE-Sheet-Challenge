#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	int freq[n+1]={0};
	for(int i=0; i<n; i++){
		if(freq[arr[i]+1]==0){
			freq[arr[i]+1]+=1;
		}
		else{
			return arr[i];
		}
	}
	return -1;
}
