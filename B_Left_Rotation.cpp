#include <iostream>
#include <queue>
using namespace std;
https://vjudge.net/contest/476841#problem/B

int main()
{ 
    int n,d;
    cin >>n >>d;
    queue<int> q;
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        q.push(no);
    }
    while(d--){
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        cout << q.front()<<" ";
        q.pop();
    }
    return 0;
}
