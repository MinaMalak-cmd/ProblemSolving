#include <iostream>
//https://codeforces.com/contest/236/problem/A
using namespace std;

int main()
{
    string word;
    cin >>word;
    int counter=0;
    for(char c='a';c<='z';c++){
        for(int i=0;i<word.size();i++){
           if(c==word[i]){
             counter ++;
             break;
           } 
        }
    }
    if(counter%2!=0) std::cout << "IGNORE HIM!" << std::endl;
    else std::cout << "CHAT WITH HER!" << std::endl;
    return 0;
}

