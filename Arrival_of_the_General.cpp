//https://vjudge.net/contest/500670#problem/B

#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n; cin >>n;
    int heights[n],seconds=0;
    for(int i=0;i<n;i++){
      cin >>heights[i];
    }
    int arr[n];
    copy(heights,heights+n,arr);
    sort(arr,arr+n);
    int max=arr[n-1];
    int min = arr[0];
    for(int i=1,j=n-1;i<n;i++,j--){
        if(heights[j]==min){
            seconds +=(n-1)-j;
            break;
        }
    }
    cout << seconds;
    return 0;
}