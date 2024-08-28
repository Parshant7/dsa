// Input : arr[] = [4, 3, 1, 5, 6]
// Output : 11
// Explanation : Subarrays with smallest and second smallest are:- [4, 3] smallest = 3,second smallest = 4
// [4, 3, 1] smallest = 1, second smallest = 3
// [4, 3, 1, 5] smallest = 1, second smallest = 3
// [4, 3, 1, 5, 6] smallest = 1, second smallest = 3
// [3, 1] smallest = 1, second smallest = 3
// [3, 1, 5] smallest = 1, second smallest = 3
// [3, 1, 5, 6] smallest = 1, second smallest = 3
// [1, 5] smallest = 1, second smallest = 5
// [1, 5, 6] smallest = 1, second smallest = 5
// [5, 6] smallest = 5, second smallest = 6
// Maximum sum among all above choices is, 5 + 6 = 11.


#include<iostream>
#include<vector>

using namespace std;


// 4 3 = 7
// 5 4 = 9
// 6 5 = 

l r
max = 11
2+5 = 7
5+6 = 11


// 2, 5, 6, 1, 4, 7, 8, 3, 9
// 15

int main(){
    vector<int> nums = {4, 3, 1, 5, 6, 1, 7};
    int size = nums.size();
    int largest = nums[0];
    int sec_largest = -1;

    for(int i=1;i<size;i++){
        if(nums[i]>largest){
            sec_largest = largest;
            largest = nums[i];
        }
        else if(sec_largest == -1 || nums[i] > sec_largest){
            sec_largest = nums[i];
        }
    }

    cout<<"largest "<<largest<<" sec largest "<<sec_largest<<endl;
    cout<<largest+sec_largest;
    return 0;
}
// 1539