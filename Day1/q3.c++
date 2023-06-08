#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &p, int n)
{
   
    int ind=-1;
    for(int i=n-2; i>=0; i--){
        if(p[i]<p[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(p.begin(),p.end());
        return p;
    }
    for(int i=n-1; i>ind; i--){
        if(p[i]>p[ind]){
           swap(p[i],p[ind]);
           break;
        }
    }
    
    reverse(p.begin()+ind+1,p.end());
    return p;
    // next_permutation(p.begin(),p.end());
    // return p;
}