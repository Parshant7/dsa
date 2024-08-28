#include<bits/stdc++.h>
// #include<vector>
using namespace std;

int main(){
    vector <int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int size = arr.size();
    int max_val = arr[0];
    int curr_max = arr[0];
    int max_L = 0;
    int max_R = 0;
    int curr_L = 0;

    for(int i=1;i<size;i++){
        curr_max+=arr[i];
        if(arr[i] > curr_max){
            curr_L = i;
            curr_max = arr[i];
        }
        if(curr_max > max_val){
            max_L = curr_L;
            max_val = curr_max;
            max_R = i;
        }
    }

    cout<<" max "<<max_val<<" "<<endl;
    cout<<" l "<<max_L<<" r "<<max_R<<endl;


    return 0;
}
