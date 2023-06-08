#include <bits/stdc++.h>
using namespace std;
string fourSum(vector<int> arr, int target, int n) {
    string yes="Yes";
    string no="No";
        sort(arr.begin(),arr.end());
        for(int i=0; i<n-2; i++){
            int s1=target-arr[i];
            for(int j=i+1; j<n-2; j++){
                int s2=s1-arr[j];
                int low=j+1,high=n-1;
                while(low<high){
                      int s3=arr[low]+arr[high];
                      if(s3==s2){
                          return yes;
                      }
                      else if(s3<s2){
                          low++;
                      }
                      else{
                          high--;
                      }
                }
            }
        }
        return no;
}
