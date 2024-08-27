#include<iostream>

using namespace std;

int main(){

    int longest_len = 0;
    int current_len = 0;
    int sum = 0;
    int arr[] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
    int k = 15;
    int len = sizeof arr/sizeof arr[0];

    int smallestNum = arr[0];

    for(int i=1;i<len;i++){
        if(arr[i]<smallestNum){
            smallestNum = arr[i];
        }
    }
    
    //modifying array
    cout<<"smallest num " <<smallestNum<<endl;
    if(smallestNum<0){
        smallestNum *= -1;
        
        k+=smallestNum;
        cout<<"k "<<k<<endl;
        for(int i=0;i<len;i++){
            if(arr[i]!=0){
                arr[i] += smallestNum;
            }
        }
    }

    cout<<" modified array "<<endl;
    for(int i=0;i<len;i++){
        cout<<" "<<arr[i]<<endl;
    }

    for(int i=0;i<len;i++){
        sum += arr[i];
        current_len++;
        cout<<" len "<<current_len<<" and sum "<<sum<<endl;
        // cout<<" long len "<<longest_len<<endl;

        int j = i+1-current_len;
        while(j<=i && sum>k){
            sum -= arr[j];
            current_len--;
            j++;
        }
        if(sum == k){
            if(current_len>longest_len){
                longest_len = current_len;
            }
        }
    }

    cout<<" res "<<longest_len;

    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// int getLongestSubarray(vector<int>& a, long long k) {
//     int n = a.size(); // size of the array.
//     //modi
//     int left = 0, right = 0; // 2 pointers
//     long long sum = a[0];
//     int maxLen = 0;
//     while (right < n) {
//         // if sum > k, reduce the subarray from left
//         // until sum becomes less or equal to k:
//         while (left <= right && sum > k) {
//             sum -= a[left];
//             left++;
//         }

//         // if sum = k, update the maxLen i.e. answer:
//         if (sum == k) {
//             maxLen = max(maxLen, right - left + 1);
//         }

//         // Move forward thw right pointer:
//         right++;
//         if (right < n) sum += a[right];
//     }

//     return maxLen;
// }

// int main()
// {
//     vector<int> a = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};
//     long long k = 10;
//     int len = getLongestSubarray(a, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;
// }

