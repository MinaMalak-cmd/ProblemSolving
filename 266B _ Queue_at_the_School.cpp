#include <iostream>
//https://codeforces.com/problemset/problem/266/B
using namespace std;

int main()
{
    int n,t;
    string s;
    cin >> n >>t;
    cin >>s;
    int size = s.size();
    for(int j=0;j<t;j++){
        for(int i=0;i<size-1 ;i++){
            if(s[i]=='B'&& s[i+1]=='G'){
                s[i+1]='B';
                s[i]='G';
                i++;
            }
        }
    }
    cout<< s;

    return 0;
}
