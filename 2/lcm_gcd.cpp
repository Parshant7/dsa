#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    int A = 16;
    int B = 12;
    int n1 = A,n2 = B;
    int hcf;

    while(A>0 && B>0){
        if(A>B){
            A = A%B;
        }
        else{
            B=B%A;
        }
    }
    if(A)
        hcf = A;
    else
        hcf = B;

    int lcm = (A*B);
    cout<<lcm<<endl;
    cout<<hcf<<endl;
    return 0;
}