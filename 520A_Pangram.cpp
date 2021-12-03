#include<iostream>
#include<string>
#include <cctype>
#include <algorithm>
//https://codeforces.com/problemset/problem/520/A

using namespace std;
bool hasAllCharacters(string str){
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int found ;
    for (int i = 0; i < alphabet.length(); i++) {
        found = min(str.find(alphabet[i]),str.find((char) toupper(alphabet[i])));
        if (found==-1) return false;
    }
    return true;
}
int main()
{
    int numberOfLetters;
    string word;
    cin>>numberOfLetters>>word;
    if(numberOfLetters<26) cout <<"NO";
    else if (hasAllCharacters(word)) cout <<"YES";
    else cout <<"NO";
    return 0;
}