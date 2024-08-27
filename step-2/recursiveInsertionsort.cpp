#include<iostream>
using namespace std;

void insertionSort(int arr[], int idx){
    if(idx==0) return;
    insertionSort(arr, idx-1);

    while(arr[idx]<arr[idx-1] && idx>0){
        swap(arr[idx], arr[idx-1]);
        idx--;
    }
    // int num = bubblesort(arr,)
}

int main(){
    int arr[] = {13,54,20,4,48};
    int len = 5;
    insertionSort(arr,4);
    for(int i=0;i<len;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}