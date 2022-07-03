/*
If you are given 3 stacks with same length
find at which max point their summations become equal
*/

#include <iostream>
#include <map>  
#include <stack> 
using namespace std;

int main()
{
    int n,a; cin >>n;
    
    stack<long long> x,y,z;
    //first get stack values
    for(int i=0;i<n;i++){
        cin >>a;
        x.push(a);
    }
    for(int i=0;i<n;i++){
        cin >>a;
        y.push(a);
    }
    for(int i=0;i<n;i++){
        cin >>a;
        z.push(a);
    }
    //second 
    long long sum1=0,sum2=0,sum3=0;
    long long arr1[n],arr2[n],arr3[n];
    for(int i=0;i<n;i++){
        sum1 += x.top();
        x.pop();
        arr1[i] =sum1;
        
        sum2 += y.top();
        y.pop();
        arr2[i] =sum2;
        
        sum3 += z.top();
        z.pop();
        arr3[i] =sum3;
    }
    map<long long, int> mp;
    for(int i=0;i<n;i++){
     mp[arr1[i]] +=1;
     mp[arr2[i]] +=1;
     mp[arr3[i]] +=1;
    }
    long long result;
    for(auto i:mp){
        if(i.second==3)
          result = i.first;

    }
    cout << result;
    return 0;
}
