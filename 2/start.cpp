#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int number = 9999;
    int cnt = (int)(log10(number)+1);

    // while(number){
    //     number = number / 10;
    //     cout << "number "<<number<<endl;
    //     cout << "number2 "<<number%10<<endl;
    //     digits++;
    // }

    cout<<log10(number)<<endl;
    cout<<log10(number)+1<<endl;
    
    cout<<"cnt "<<cnt;
    return 0;
}