#include <iostream>
#include <stack> 
//a code to to check if paranethesis is equal or not
// for example : (()) -> true || ((())))))))) -> false
using namespace std;

int main()
{
    string s; cin >>s;
    stack<char> stack;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            stack.push('(');
        }
        else if(s[i]==')' && !stack.empty()){
            stack.pop();
        }
        else if(s[i]==')' && stack.empty()){
            cout << "No";
            return 0;
        }
    }
    string flag=!stack.empty()? "No":"yes";
    cout << flag;
    return 0;
}
