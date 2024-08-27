#include<iostream>
using namespace std;

int main(){
    int arr[]= {1,1};
    // int arr[]= {1,1,2,3,3,3,4,5,5,5};

    // int arr[]= {0,0,0,0,0,0,0,0,0,1,1,1,2,2,3,3,4};
    int len = sizeof arr/sizeof arr[0];
    int j = 1;
    int i = 0;
    do{
        if(j>=len){
            break;
        }

        while(j<len && arr[j]==arr[j-1]){
            j++;
        }

        if(j<len){
            arr[++i] = arr[j];
            j++;
        }

    }while(i<len);


    // for(i=1;i<len;i++){
    //   if(j==len){
    //     break;
    //   }
    //   while(arr[j]==arr[j-1] && j<len-1){
    //     j++;
    //   };
    //   //send jth element to i
    //   arr[i] = arr[j];
    //   cout<<"  (i-"<<i<<" j-"<<j<<")";
    //   j++;
    // }

    for(int k=0;k<=1;k++){
        cout<<" , "<<arr[k];
    }
    cout<<endl<<i;
    return 0;
}