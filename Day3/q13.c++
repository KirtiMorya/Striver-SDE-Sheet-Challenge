#include<bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& mat, int tar) {
    int n=mat.size();
    int m=mat[0].size();
     int low=0;
     int high=(n*m)-1;
     while(low<=high){
            int mid=(high+low)/2;
            int r=mid/m;
            int c=mid%m;
        if(mat[r][c]==tar){
            return true;
        }
        else if(mat[r][c]<tar){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
     }
     return false;
}