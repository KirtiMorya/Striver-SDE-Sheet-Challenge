#include <bits/stdc++.h>
using namespace std;
vector<int> ninjaAndSortedArrays(vector<int>& a1, vector<int>& a2, int n, int m) {
	int i=0;
	int j=0;
	vector<int>vt;
	while(i<n && j<m){
		if(a1[i]<=a2[j] && a1[i]!=0){
			vt.push_back(a1[i]);
			i++;
        } 
		else {
			if(a2[j]!=0){
			vt.push_back(a2[j]);
            j++;	
			}
            
        }
    }
	    if(i<n){
			while(i<n){
                if (a1[i] != 0) {
                   vt.push_back(a1[i]);
                }
                i++;
			}
		}
        if(j<m){
			while(j<m){
                if (a2[j] != 0) {
                    vt.push_back(a2[j]);
                 }
                j++;
			}
		}
		
// 		for(int i=0; i<n+m; i++){
//    cout<<vt[i]<<" ";
// 	}
		return vt;
}