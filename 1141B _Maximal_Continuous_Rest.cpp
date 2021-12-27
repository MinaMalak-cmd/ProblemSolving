#include <iostream>
//https://codeforces.com/problemset/problem/1141/B
using namespace std;

int main()
{
    int n;
    cin >> n;
    int hours[n]={0};
    for(int i=0;i<n;i++){
        cin >> hours[i];
    }
    int continualHours = 0;
    int counter=0;
    int firstZeroPosition= n;
    int lastZeroPosition= 0;
    for(int i=0;i<n;i++){
        if(hours[i]==0){
            firstZeroPosition=min(firstZeroPosition,i);
            lastZeroPosition=max(lastZeroPosition,i);
        } 
        counter =(hours[i]==1)?counter+1:0;
        continualHours=max(continualHours,counter);
    }
    if(hours[n-1]==1 && hours[0]==1){
      int counter1 = n-1 - lastZeroPosition + firstZeroPosition;
       continualHours=max(continualHours,counter1);
    }
    cout<<continualHours;

    return 0;
}

//another soln 
/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int hours[n]={0};
    for(int i=0;i<n;i++){
        cin >> hours[i];
    }
    int continualHours = 0;
    int counter=0;
    for(int i=0;i<n || hours[i%n]==1;i++){
        counter =(hours[i%n]==1)?counter+1:0; 
        continualHours=max(continualHours,counter);
    }
    
    cout<<continualHours;

    return 0;
}
