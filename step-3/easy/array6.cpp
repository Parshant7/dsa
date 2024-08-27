#include<iostream>
#include<vector>

using namespace std;

int main(){
    int arr1[] = {1,2,2,3};
    int arr2[] = {1,2,2,3,4,5,6,7};
    int n=4, m=8;

    vector<int> arr3;
    int i=0,j=0;
    
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(arr3.size() == 0 || arr3.back() != arr1[i])
            {
                arr3.push_back(arr1[i]);
            }
            i++;
        }else{
            if(arr3.size() == 0 || arr3.back() != arr2[j]){
                arr3.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(i<n){
        if(arr3.size()==0||arr3.back() != arr1[i]){
            arr3.push_back(arr1[i]);
        }
        i++;
    }

    while(j<m){
        if(arr3.size()==0 || arr3.back()!=arr2[j]){
            arr3.push_back(arr2[j]);
        }
        j++;
    }

    for(auto it: arr3){
        cout<<" "<<it;
    }
    return 0;
}