#include<iostream>

using namespace std;

int main(){
    int arr[] = {13,54,20,4,48};
    int len = 5;

    for(int i=0;i<len-1;i++){
        for(int j=i;j<len;j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }

    for(int i=0;i<len;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}