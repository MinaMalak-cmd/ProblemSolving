#include <iostream>
#include <vector>
#include <stack>

using namespace std;
void checkValidity(){
    int N;
    cin >>N;
    vector<int> vec; 
    bool flag= true;
    stack<int>st;
         for (int i = 0; i <N; i++){
             int number;
             cin >> number;
             if((vec.empty()&&number==1)||(!vec.empty()&&number==vec.back()+1)){
                vec.push_back(number);
             }else 
               st.push(number);
         }
        while (!st.empty()) {
            int lastEl = vec.at(vec.size()-1);
            if(st.top()!=lastEl+1){
                flag =false;
                break;
            }
            else{
              vec.push_back(st.top());  
                st.pop();
            }
        }  
    int zero;
    cin >>zero;
    if(zero==0){
        cout << (flag?"yes":"no")<<endl;
        checkValidity();
    }
    
}
int main()
{
    checkValidity();
    return 0;
}