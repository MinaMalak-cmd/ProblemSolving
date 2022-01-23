#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//https://vjudge.net/contest/476841#problem/A
bool compare(pair<long long , long long>a,pair<long long , long long> b){
    return ((a.first<b.first) || (a.first==b.first && a.second>b.second));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >>t >>n;
    pair<long long, long long> nums[n]={make_pair(0,0)};
    while(t--){
        for(int i=0;i<n;i++){
            cin >>nums[i].first>>nums[i].second;
        }
    }
    sort(nums,nums+n,compare);
     for(int i=0;i<n;i++){
            cout << nums[i].first <<" "<< nums[i].second<<endl;
        }
    return 0;
}