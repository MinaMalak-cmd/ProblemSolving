#include <iostream>
using namespace std;
//
int main()
{
    int k;
    cin >>k;
    if(k<=9) cout <<k;
    else if(k%10==0){
        cout << k/10;
    }
    else{
        int first_digit= k/10;
        int sub= (first_digit!=1?(k-(10*(first_digit-1))):k-10) ;
        int rem = sub/2;
        cout <<(sub%2==0?(first_digit):rem);
    }
    return 0;
}

/*

*/
//hint each 10 represented by 1 integer or try to push numbers into array of strings