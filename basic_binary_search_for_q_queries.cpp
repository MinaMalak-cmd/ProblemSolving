//basic binary search for q queries
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
       bool found=0;
       int start=0, end=n-1, mid;
       while(start<=end){
           mid=(start+end)/2;
           if(arr[mid]==query){
               found=1;
               break;
           }
           else if(arr[mid]<query){
               start=mid+1;
           }
           else{
               end= mid-1;
           }
       }
       if(found)cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
