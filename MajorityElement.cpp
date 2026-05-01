//Topic is Majority Element
//Given an array of size n, find the majority element, The Majority element is the element that appears more than n/2 times. you may assume that the majority element always exist in the array.
//Input: nums=[2,3,2]  and output: 2:

#include<iostream>
#include<vector>

class solution{
    public:
    int majorityElement(std::vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count>nums.size()/2){
                return nums[i];
            }
        }
        return -1;
    }
};

//main function to test the deriven class
int main(){
    std::vector<int> nums={2,3,2};
    //creating an object of the solution class
    solution s;
    int result=s.majorityElement(nums);
    std::cout<<"The majority element is:"<<result<<std::endl;
    return 0;
}