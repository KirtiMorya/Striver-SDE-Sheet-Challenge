#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m){
    int l = 0 , r = m-1 , t  = 0 ,b = n-1;
    while(l < r && t < b ){
        int temp = mat[t][l];
        for(int col = l+1; col <= r; col++){
            int k = mat[t][col];
            mat[t][col] = temp;
            temp = k;
        }
        t++;

        for(int row = t; row <= b; row++){
            int k = mat[row][r];
            mat[row][r] = temp;
            temp = k;
        }
        r--;

        for(int col = r; col >= l; col--){
            int k = mat[b][col];
            mat[b][col] = temp;
            temp = k;
        }
        b--;

        for(int row = b; row >= t; row--){
            int k = mat[row][l];
            mat[row][l] = temp;
            temp = k;
        }
        l++;

        mat[t-1][l-1] = temp;
    }
}
