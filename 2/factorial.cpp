#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

// int factorial(int res, int num, int max_num){

//     if(res*num>max_num){
//       cout<<num<<endl;
//       return res;  
//     } 

//     return factorial(res*num,num+1, max_num);
// }

// void factorialNum(vector<int> facts, int max_num){
//     cout<<"here "<<endl;
//     int len = facts.size()+1;
//     int l_digit = 1;
//     if(len>1)
//         l_digit = facts.back();
    
//     int mul = len*l_digit;

//     if(mul>max_num){
//         return;
//     }
//     facts.push_back(mul);
//     factorialNum(facts, max_num);
// }

vector<long long> factorialNumbers(long long N)
{
        vector<long long> facts;
        long long int n = 1;
        long long int fact_num = 1;
        while(1){
            long long int num = n*fact_num; 
            if(n*fact_num > N){
                break;
            }
            fact_num = n*fact_num;
            n++;
            facts.push_back(fact_num);
        }
        return facts;
}
int main(){
    // int num = 4;
    int max_num = 7;
    int res = 1;
    vector<long long> facts;

   
    facts = factorialNumbers(max_num);
    // cout<<facts.back()<<endl;
    
    for(auto i: facts){
        cout<<i<<endl;
    }

    return 0;
}