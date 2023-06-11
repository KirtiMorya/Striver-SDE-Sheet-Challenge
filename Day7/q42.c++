//maximum consecutive
int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
      int i=0;
      int j=0;
      int count=0;
      int maxi=0;
      while(i<n){
          if(arr[i]==0){
              count++;
          }
          while(j<n && count>k){
              if(arr[j]==0){
                  count--;
              }
              j++;
          }
          maxi=max(maxi,i-j+1);
          i++;
      }

    return maxi;   
}
