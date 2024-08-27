#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {1,2,0,1,0,4,0,0,2,4,5,0,0};
    int len = arr.size();
    // int numOfZero = 0;
    int j=0;
    for(int i=0;i<len;i++){
        if(arr[i]==0){
            //find non zero element
            while(j<len && arr[j]==0){
                j++;
            }
            if(j==len){
                break;
            }else{
                arr[i] = arr[j];
                arr[j] = 0;
            }
        }
        j++;
    }

    for(auto it:arr){
        cout<<" "<<it;
    }
    return 0;
}