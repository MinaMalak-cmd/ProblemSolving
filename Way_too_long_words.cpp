/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
// https://vjudge.net/contest/497492#problem
using namespace std;
void getAbb(string word){
    int length = word.length();
    cout << word[0] ;
    cout << length-2 ; 
    cout << word[length-1] << endl;
}
int main()
{
    int n;
    cin >>n;
    string words[n];
    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        words[i]= word;
        
    }
    for(int i=0;i<n;i++){
        if(words[i].length()<=10) cout << words[i] << endl;
        else getAbb(words[i]);
    }

    return 0;
}
