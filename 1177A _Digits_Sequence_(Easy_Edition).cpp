#include <iostream>
#include <string>
//link : https://codeforces.com/problemset/problem/1177/A
using namespace std;

int main()
{
    int k;
    cin >> k;
    string nums = "";
    for(int i=1;i<=k;i++){
        nums += to_string(i);
    }
    cout << nums[k-1];
    return 0;
}
