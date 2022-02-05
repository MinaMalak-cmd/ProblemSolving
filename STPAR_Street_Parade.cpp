#include <iostream>
#include <vector>
#include <queue>
using namespace std;
//https://www.spoj.com/problems/STPAR/en/
int main()
{
    int N;
    cin >>N;
    vector<int> vec; 
    queue<int>q;
     for (int i = 0; i <N; i++){
         int number;
         cin >> number;
         if((vec.empty()&&number==1)||(!vec.empty()&&number==vec.back()+1)){
            vec.push_back(number);
         }else 
           q.push(number);
     }
    cout << "Elements in vector" <<"\n";
    for (auto i = vec.begin(); i != vec.end(); ++i)
        cout << *i << " ";
    cout <<"\n" << "Elements in queue" <<"\n";
    while (!q.empty()) {
        cout << ' ' << q.front();
        q.pop();
    }
    return 0;
}
