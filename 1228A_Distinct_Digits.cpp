#include <iostream>
//https://codeforces.com/contest/1228/problem/A
using namespace std;

int main()
{
    int l,r;
    cin >> l>>r;
    for(int i=l;i<=r;i++){
        int x = i;
        int freq[10] = {0};
        while(x>0){
            freq[x%10]+=1;
            x/=10;
        }
        int flag=0;
        for(int j=0;j<10;j++){
           if(freq[j]>1){
               flag=1;
           }
        }
        if(flag) continue;
        cout << i;
        return 0;
    }
    cout << -1;
    return 0;
}
