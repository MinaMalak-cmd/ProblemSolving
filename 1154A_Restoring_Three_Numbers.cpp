#include<iostream>
//https://codeforces.com/problemset/problem/1154/A

using namespace std;

int main()
{
    int sums[4];
    cin>>sums[0]>>sums[1]>>sums[2]>>sums[3];
    int numbers[3];
    int totalSum = sums[0];
    for(int i = 1; i <4; i++){
      if(sums[i]>totalSum) totalSum=sums[i];
    }
    int i =0;
    int j=0;
    while(i<4){
        if(sums[i]!=totalSum) {
            numbers[j]= totalSum- sums[i];
            j++;
        }
        i++;
    }
    cout<<numbers[0]<<" "<<numbers[1]<<" "<<numbers[2];
    return 0;
}
