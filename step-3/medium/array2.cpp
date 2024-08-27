#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arr = {2,0,2,1,1,0};
    int len = arr.size();
    int start = 0;
    int end = len-1;

    while(start<end){
        int j = start+1;
        while(j<end and arr[start]!=0){
            if(arr[j]==0){
                swap(arr[j], arr[start]);
            }
            j++;
        }

        j=end-1;
        while(arr[end]!=2 && end>start){
            if(arr[j]==2){
                swap(arr[j],arr[end]);
            }
            j--;
        }

        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    for(auto it: arr){
        cout<<it<<" ";
    }

    return 0;
}