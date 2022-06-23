//https://vjudge.net/contest/500670#problem/B
//what's missing look for better solution

#include <iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n; cin >>n;
    int heights[n],seconds=0,minIndex=0;
    for(int i=0;i<n;i++){
      cin >>heights[i];
    }
    int arr[n];
    copy(heights,heights+n,arr);
    sort(arr,arr+n);
    int max=arr[n-1];
    int min = arr[0];
    for(int j=n-1;j>=0;j--){
        if(heights[j]==min){
            minIndex = j;
            seconds +=(n-1)-j;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(heights[i]==max){
            seconds +=i;
            if(i>minIndex) {
                seconds -=1;
            }
            break;
        }
    }
    cout << seconds;
    return 0;
}