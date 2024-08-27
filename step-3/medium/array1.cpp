#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

int main(){
    vector <int> arr = {1,3,6,8, 11};
    unordered_map<int, int> mpp;
    
    int k=14;

    for(int i=0;i<arr.size();i++){
        int rem = k-arr[i];
        // cout<<mpp.find(rem)<<endl;
        if(mpp.find(rem) != mpp.end()){
            cout<<"yes "<<rem<<endl;
            break;
        }
        mpp[arr[i]] = i;
    }

    return 0;
}