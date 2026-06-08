//26.REMOVE DUPLICATES FROM SORTED ARRAY:
//Given an integer array nums sorted in non-decreasing order,remove the duplicated in-place such that  each unique element appears only once.the relative order of the elements should be kept the same.
//consider the number of unique elements in "names" to be 'k'.After removing duplicated return the number of unique elements 'k'.the first 'k' elements of "nums" should contain the unique numbers in sorted order.the remaining elements beyond index "k-1" can be ignored.
//e.g., Input: nums=[1,1,2]
//Output: nums;[1,2,_]

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int RemoveDuplicates(vector<int>& nums){
        //we use conditional
        if(nums.size()==0){
            return 0;
        }
        int k=1;        //position for next unique element

        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[k-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

//main function
int main(){
    vector<int> nums={1,1,2,2,3};

    solution obj;
    int k=obj.RemoveDuplicates(nums);

    cout<<"Number of unique elements: "<<k<<endl;

    cout<<"Array after removing duplicates: ";
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}