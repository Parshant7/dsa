//rotate the array by k

#include<iostream>
#include<vector>

using namespace std;

//using extra space
// int main(){
//     vector <int> nums{-1,100,3,99};
//     vector <int> temp;

//     int k = 2;
//     int len = nums.size();

//     for(int i=0;i<k;i++){
//         temp.push_back(nums[i]);
//     }

//     int i = 0;

//     for(int j=k;j<len;j++){
//         nums[i] = nums[j];
//         i++;
//     }

//     i = len - k;
//     for(int j=0;j<k;j++){
//         nums[i++] = temp[j];
//     }

//     for(auto it: nums){
//         cout<<" "<<it<<endl;
//     }

//     return 0;
// }

// using more iteration but O(1) space
// int main(){
//     vector <int> nums{1,2,3,4,5,6,7};
//     int len = nums.size();
//     int k = 6;

//     for(int i=k-1;i>=0;i--){
//         int temp = nums[i];
//         for(int j=i+1;j<=len-(k-i);j++){
//             nums[j-1] = nums[j];
//         }

//         nums[len-(k-i)] = temp;

//         for(auto it: nums){
//             cout<<" "<<it;
//         }
//         cout<<endl;   
//     }

//     for(auto it: nums){
//         cout<<" "<<it;
//     }
// }

void reverse(vector<int>& nums, int start, int len){
    if(len<1) return;

    for(int i=0;i<len/2;i++){
        int temp = nums[i+start];
        nums[i+start] = nums[start+len-1-i];
        nums[start+len-1-i] = temp;
        cout<<endl;
    }
}

int main(){
    vector <int> nums{-1};
    int len = nums.size();
    int k = 2;

    if(k>=len) {
        k=k%len;
    }

    reverse(nums, 0, len);
    reverse(nums, 0, k);
    reverse(nums, k, len-k);

    for(auto it: nums){
        cout<<"n "<<it;
    }
}