#include<iostream>

using namespace std;

void reverseArr(int arr[], int idx, int len){
    if(idx==len){
        return;
    }
    int num = arr[idx];
    reverseArr(arr,idx+1, len);
    arr[len-1-idx] = num;

}
int main(){
    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    reverseArr(arr,0,len);

    for(int i=0;i<len;i++){
        cout<<arr[i]<<endl;
    }
    return 1;
}