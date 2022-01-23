#include <iostream>
#include <stack>
using namespace std;
//https://vjudge.net/contest/476841#problem/C
//https://codeforces.com/problemset/problem/343/B

int main()
{
    string s;
    cin >>s;
    stack<char> str;
    int size=s.size();
    for(int i=0;i<size;i++){
        if(str.empty()||s[i]!=str.top()){
            str.push(s[i]);
        }
        else{
            str.pop();
        }
    }
    cout << (str.empty()?"Yes":"No");
    return 0;
}
