#include <iostream>
#include <queue>
using namespace std;
//https://vjudge.net/contest/476841#problem/D
//https://codeforces.com/problemset/problem/450/A

int main()
{
    int n,m;
    cin >>n>>m;
    queue <int> q;
    int lastItem =n;
    while(n--){
        int no;
        if(cin>>no,no>m)
            q.push(no);
    }
    while(!q.empty()){
     
        lastItem=q.front();
        q.pop();
    }
    cout << lastItem;
    return 0;
}
/*
This solution fails at this test case
10 5

2 7 3 6 2 5 1 3 4 5

Output

6

Answer

4



*/
