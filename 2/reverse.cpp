#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int number = 2147483647;
    long int rev = 0;

    while(number){
        int l_digit = number%10;
        cout<<" l_digit "<<l_digit;
        number = number/10;
        cout<<" number "<<number;
        rev = rev*10+l_digit;
        cout<<" rev "<<rev;
    cout<<endl;
    }


    // int cnt = (int)(log10(number)+1);

    // cout<<log10(number)<<endl;
    // cout<<log10(number)+1<<endl;
    
    cout<<rev<<endl;
    return 0;
}