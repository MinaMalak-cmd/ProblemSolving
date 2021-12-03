#include<iostream>
//http://codeforces.com/problemset/problem/510/A

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int oddHashCounter = m;
    bool hashDone = false;
    for (int i = 1; i <=n; i++) {
        hashDone=false;
       for(int j=1; j<=m; j++){
        if(i%2!=0){
            cout<<"#";
        }
        else{
          if(j==oddHashCounter &&!hashDone){
              cout<<"#";
              hashDone=true;
              oddHashCounter= (oddHashCounter==m)?1:m;
          }  
          else{
              cout<<".";
          }
        }
       }
       cout <<endl;
    }
    return 0;
}