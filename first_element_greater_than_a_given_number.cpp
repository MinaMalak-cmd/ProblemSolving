//first element greater than a given number 

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n,t,query; cin>>n>>t;
    int arr[n+1];
    for(int i=0; i<n ;i++){
        cin >>arr[i];
    }
    sort(arr, arr+n);
    while(t--){
       cin >> query;
       int ans=-1;
       int start=0, end=n-1, mid;
       while(start<=end){
           mid=(start+end)/2;
           if(arr[mid]>query){
              ans=arr[mid];
              end= mid-1;
           }
           else {
               start=mid+1;
           }
       }
       cout << ans <<endl;
    }

    return 0;
}
