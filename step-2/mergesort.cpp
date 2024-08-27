#include<iostream>

using namespace std;
/*
/////////////////////////////////////
start = 0, end=5
size = 4-0+1 = 5
mid = size/2 = start+2 
start->mid [13,54,20]
mid->end 
{13,54,20,4,48}

[13,54] [20,4,48]
/////////////////////////////////////
*/

void merge(int arr[], int start, int end){
    // sort first half

    int size = end-start+1; //2 [0,3]
    if(size < 2) {
        return;
    }

    int mid = start+((size)/2); //2/2 = 1

    merge(arr, start, mid-1); //sort first half  (0,1)
    merge(arr,mid,end); //sorted second half

    // merge them
    int sortedArr[size];
    int i=start;
    int j=mid;
    int k=0;

    while(i<=mid-1 && j<=end){
        if(arr[i]<arr[j]){
            sortedArr[k] = arr[i];
            i++;
        }else{
            sortedArr[k] = arr[j];
            j++;
        }
        k++;
    }
    while(j<=end){
        sortedArr[k] = arr[j];
        j++;
        k++;
    }
    while(i<=mid-1){
        sortedArr[k] = arr[i];
        i++;
        k++;
    }
    k=0;
    // cout<<"sorted array "<<start<<"-"<<mid<<" "<<mid
    for(int i=start;i<=end;i++){
        arr[i] = sortedArr[k++];
        
    }
}

int main(){
    int arr[] = {2,2,3,4,4,2};
    int len = 5;

    merge(arr,0,4);

    for(int i=0;i<len;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}
