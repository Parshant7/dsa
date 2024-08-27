#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int number = 10;
    if(number<0)return false;

    int temp = number;
    int reverse = 0;
    int digit = (int)(log10(number));
    cout<<"digit init "<<digit<<endl;
    while(temp){

        int f_digit = temp/pow(10, digit);
        int l_digit = temp%10;

        cout<<" f_digit "<<f_digit<<" l_digit "<<l_digit;
        if(f_digit != l_digit){
            cout<<"not palindrome"<<endl;
            break;
        }

        temp = temp-(f_digit*pow(10, digit));//removed 1st digit
        cout<<" temp1 "<<temp;
        temp = temp/10; //removed l_digit
        cout<<" temp2 "<<temp;
        digit-=2;
        cout<<" digit "<<digit;
        cout<<endl;
    }

    cout<< "Palindrome Number";
  
    return 0;
}