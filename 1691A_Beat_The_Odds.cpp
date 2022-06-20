//https://codeforces.com/problemset/problem/1691/A

#include <iostream>
using namespace std;
 
bool isEven(int n){
    return !(n & 1);
}
 
int main()
{
    int t; cin >>t;
    while(t--){
        int n,oddCounter=0;
        cin >>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >>arr[i];
           if(!isEven(arr[i])) oddCounter++;
        }
        cout << min(oddCounter,n-oddCounter) << endl;
    }
 
    return 0;
}
