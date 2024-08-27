#include<iostream>
using namespace std;

 int select(int arr[], int i)
{
    // code here such that selectionSort() sorts arr[]
    int max_i = i;
    int res;
    
    for(int j=i-1;j>=0;j--){
        if(arr[max_i]<arr[j]){
            max_i = j;
        }
    }
    
    res = arr[max_i];
    arr[max_i] = arr[i];
    
    return res;
}

int main(){
    int arr[] = {13,54,20,4,48};
    int len = 5;

    for(int i = len-1; i>=0; i--){
        int num = select(arr,i);
        arr[i] = num;
    }

    for(int i=0;i<len;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}
//  select() and selectionSort() ,where select() takes arr[] and starting point of unsorted array i as input parameters and returns the selected element for each iteration in selection sort, and selectionSort() takes the array and it's size and sorts the array.