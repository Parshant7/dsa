#include<iostream>
using namespace std;

void quicksort(int arr[], int l, int r){
    if(r-l<1){
        return;
    }

    int pivot = arr[r];
    int from_left=l;
    int from_right=r;
    int k=l;

    while(from_left<from_right){
        while(arr[from_left]<= pivot && from_left <= r){
            cout<<"from left "<<from_left<<" r "<<r<<endl;
            from_left++;
        }
        while(arr[from_right]>=pivot && from_right >= l){
            cout<<"from right "<<from_right<<" l "<<l<<endl;
            from_right--;
        }
        if(from_left<from_right){
            swap(arr[from_left],arr[from_right]);
        }
    }
    // for(int i=l;i<=r;i++){
    //     if(arr[i]<pivot){
    //         from_left++;
    //     }
    //     if(arr[i]>pivot){
    //         from_right--;
    //     }
    // }
    // cout<<from_left<<" "<<from_right<<endl;
    // cout<<"swapping "<<arr[r]<<" "<<arr[from_right]<<endl;
    swap(arr[r],arr[from_right]);
    // quicksort(arr,l,from_right-1);
    // quicksort(arr,from_right+1,r);
}

int main(){
    int arr[] = {13,54,20,4,48};
    int len = 5;
    quicksort(arr,0,4);
    for(int i=0;i<len;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}