//https://codeforces.com/problemset/problem/1454/A

#include <iostream>
using namespace std;

int main()
{
    int t; cin >>t;
    while(t--){
        int n;cin >>n;
        int arr[n+1];
        int length = sizeof(arr)/sizeof(arr[0]);
        arr[0]=0;
        for(int i=1;i<length;i++){
            arr[i]=i;
        }
        for(int i=1;i<length-1;i++){
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        for(int i=1;i<length;i++){
            cout << arr[i] << " ";
        }
        cout <<endl;
    }
 
    return 0;
}
