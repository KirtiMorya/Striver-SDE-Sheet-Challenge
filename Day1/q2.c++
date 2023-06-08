#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
  
  vector<vector<long long>>vt(n);
  for(int i=0; i<n; i++){
      vt[i].resize(i+1);
      vt[i][0]=vt[i][i]=1;
        for(int j=1; j<i; j++){
          vt[i][j]=vt[i-1][j-1]+vt[i-1][j];
        }
  }
  return vt;

}
 