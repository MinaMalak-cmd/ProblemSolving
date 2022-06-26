#include <iostream>
#include <cmath>
//https://vjudge.net/contest/500670#problem/H
using namespace std;

int main()
{
    int a,b; cin >>a>>b;
    cout << min(a,b) <<" "<< floor((max(a,b)-min(a,b))/2);
    return 0;
}
