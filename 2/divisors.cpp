#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int num = 12;
    int i = 1;
    vector<int> divisors;

    while(i<=sqrt(num)){
        if(num%i==0){
            divisors.push_back(i);
        }
        if(i!=num/i){
            divisors.push_back(num/i);
        }
        i++;
    }

    for(int divisor:divisors){
        cout<<divisor<<endl;
    }
    return 0;
}