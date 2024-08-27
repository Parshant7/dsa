#include<iostream>
#include<string>

using namespace std;


int fibonacci(int N){
    if(N<=1){
        return N;
    }
   int res = fibonacci(N-1) + fibonacci(N-2);
   cout<<res<<endl;
   return res;
}


int main(){
    cout<<fibonacci(7)<<endl;
    return 0;   
}

// 1 1 2 3 5 8 13