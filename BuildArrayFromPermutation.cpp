//1920.Build Array From Permutation
// Given a zero based permutation nums(0-indexed) build an array ans of the same length ans[i]=nums[nums[i]] for each 0<=1<nums.length and return it. A zero based permutation "nums" is an array of distinct integers from 0 to nums.length-1(inclusive).
//Input: nums = [0,2,1,5,3,4]
//output: [0,1,2,4,5,3]

//logic behind that is:
//step-i: we will multiply each element of the array with n and add the value of the element at the index of the current element in the original array.
//like as: nums[i]=nums[i]+n*(nums[nums[i]])
//step-ii: we will divide each element of the array by n to get the final answer.
//like as: nums[i]=nums[i]/n or nums[i]=nums[i]+n*(nums[nums[i]%n])
//step-iii: we will return the modified array as the answer.

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int> buildArray(vector<int>& nums){
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+n*(nums[nums[i]]%n);
        }
        for(int i=0;i<n;i++){
            nums[i]=nums[i]/n;
        }
        return nums;
    }
};

//main function
int main(){
    vector<int> nums={0,2,1,5,3,4};
    solution s;
    vector<int> ans=s.buildArray(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}