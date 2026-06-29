//41.FIRST MISSING POSITIVE.
//Given an unsorted integer array nums.Return the smallest positive integer that is not resent in "nums".
//You must implement an algorithm that runs in O(n)time and uses O(1) auxiliary space
//e.g., INPUT: nums=[1,2,0]
//OUTPUT: 3
//EXPLANATION: The numbers in the range [1,2] are all in the array.

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int FirstMissingPositive(vector<int>& nums){
        int n=nums.size();

        //place every number at its correct index
        for(int i=0;i<n;i++){
            while(nums[i]>=1 && nums[i]<=n && nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        //find the first incorrect position
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1)
            return i+1;
        }
        return n+1;

    }
};

//main function
int main(){
    vector<int> nums={3,4,-1,1};

    solution s;
    cout<<s.FirstMissingPositive(nums);

    return 0;
}