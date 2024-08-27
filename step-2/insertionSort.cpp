#include<iostream>

using namespace std;


int main(){
    int arr[] = {13,54,20,4,48};
    int len = 5;

    for(int i=1;i<len;i++){
        int j=i;
        while(arr[j]<arr[j-1] && j>0){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i=0;i<len;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}
// our task is to complete the function insert() and insertionSort() where insert() takes the array, it's size and an index i and insertionSort() uses insert function to sort the array in ascending order using insertion sort algorithm. 