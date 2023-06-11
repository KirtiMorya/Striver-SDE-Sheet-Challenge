#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    long left[n];
    long right[n];
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    for(long i=1; i<n; i++){
        left[i]=max(arr[i],left[i-1]);
    }
    for(long i=n-2; i>=0; i--){
        right[i]=max(arr[i],right[i+1]);
    }
    long water=0;
    for(long i=1; i<n; i++){
       water=water+min(left[i],right[i])-arr[i];
    }
    return water;

}