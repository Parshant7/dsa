#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int num = 135;
    int temp = num;
    int res = 0;
    int digit_cnt = (int)log10(num)+1;

    while(temp){
        int digit = temp%10;
        res += pow(digit, digit_cnt);
        temp/=10;
    }

    if(res==num) cout<<res<<" is armstrong number";
    else cout<<res<<" is not armstrong number";

    return 0;
}