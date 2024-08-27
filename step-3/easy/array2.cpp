#include<iostream>
using namespace std;

int main(){
    int arr[]= {2,1,3,4};

    bool found = false;

    int arr_start = arr[0];
    int last;
    int first;
    int arr_end = arr[3];

    // for(int i=1;i<4;i++){
    //     if(arr[i]<arr[i-1]){
    //         if(!found) {
    //             found=true;
    //             last = arr[i-1];
    //             first = arr[i];
    //         }else{
    //             cout<<" not sorted";
    //         }
    //     }
    // }
    // if(arr_end > arr_start){
    //     cout<<" not sorted";
    // }
    return 0;
}