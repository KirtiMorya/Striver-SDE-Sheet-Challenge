#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int k) {
   sort(arr.begin(),arr.end());
   vector<vector<int>>vt;
   int sum=0;
   for(int i=0; i<n-2; i++){
		       int low=i+1;
				int high=n-1;
		  while(low<high){
				sum=arr[i]+arr[low]+arr[high];
				 if(sum==k){
					vt.push_back({arr[i],arr[low],arr[high]});
					//return vt;
					low++;
					high--;
					while(low<n && arr[low] == arr[low-1]){
						low++;
					}
						
					while(high>i && arr[high] == arr[high+1]){
						high--;
					}	
				}
				else if(sum<k){
					low++;
				}
				else{
					high--;
				}
	        }
			while(i<n-1 && arr[i]==arr[i+1]){
				i++;
			}
   }
   return vt;
}