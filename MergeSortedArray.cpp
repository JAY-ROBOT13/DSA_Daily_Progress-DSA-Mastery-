// Merge sorted array:
// you're given two integer arrays num1 and num2 sorted in non0decreasing order,and two integers 'm' and 'n' requesting the number of elements in num1 and num2 respectively
// merges num1 and num2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function but instead be stored inside the array nums1, To accomodate this num1 has a length of m+n, where the first m-element denote the elements.
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
//         int m=3;
//         int n=3;
//         for(int i=0;i<nums1.size(); i++){
//             if(nums1.size()==m+n){
//                 return nums1

//             }
//         }
//     }
// }

// we are using the m=3 , n=3;
int i = m-1;
int j=n-1;
int k=m+n-1;

//while loop is used for entry controlled loop so we don't have any idea about number of execution
while(i>=0 && j>=0){
    if(nums1[i]>nums2[j]){
        nums1[k]=nums1[i];
        i--;
    } else {
        nums1[k]=nums2[j];
        j--;
    }
    k--;
}
while(j>=0){
    nums1[k]=nums2[j];
    k--;
    j--;
}
    }
};

// main function
int main(){
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};

    int m=3;
    int n=3;

    solution obj;
    obj.merge(nums1,m,nums2,n);

    //we use for loop
    for(int i=0;i<nums1.size();i++){
        std::cout<< nums1[i] <<" ";
    }

    return 0;

}