#include <iostream>
using namespace std;

int main(){
    int len = 37; 
    int arr[len] = {61, 30, 28, 47, 42, 25, 41, 56, 27, 45, 44, 34, 46, 35, 58, 36, 60, 29, 53, 55, 32, 31, 33, 59, 50, 51, 52, 37, 39, 38, 43, 49, 54, 57, 40, 26, 48};

    int largest = arr[0];
    int secondLargest= arr[0];

    for(int i=0;i<len;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest){
            if(largest==secondLargest || arr[i]>secondLargest){
                secondLargest = arr[i];
            }
        }
    }

    cout<<largest<<endl;
    cout<<secondLargest<<endl;
    return 0;
}