#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	int val=-1;
	int count=0;
	for(int i=0; i<n; i++){
		if(val==arr[i]){
			count++;
		}
		else if(count==0){
			val=arr[i];
		}
		else{
			count--;
		}
		
	}
	int c=0;
	for(int i=0; i<n; i++){
		if(arr[i]==val){
			c++;
		}
	}
	if(c>n/2){
		return val;
	}
	return -1;
}