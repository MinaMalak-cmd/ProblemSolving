#include <iostream>
#include <queue>

using namespace std;
int main()
{
    int n,counter=0,sum=0,a; cin >>n;
    double ratio = 0;
    priority_queue < double > pqueue;
    for(int i=0;i<n;i++){
      cin >>a;
      sum+=a;
      pqueue.push(a);  
    }
    ratio = double(sum)/double(2);
    while (ratio>0) {
        double remaind = pqueue.top()/2;
        pqueue.pop();
        pqueue.push(remaind);
        ratio-=remaind;
        counter++;
    }
    cout << counter;
    return 0;
}