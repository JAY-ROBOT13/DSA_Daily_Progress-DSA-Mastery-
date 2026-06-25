//1.TWO SUM
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//YOu may assume that each input would have exactly one solution, and you may not use the same element twice.
//YOu can return the answer in any order.
//INPUT: NUMS=[2,7,11,15],   target=9;
//OUTPUT: [0,1]

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int> twosum(vector<int>&nums, int target){
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};

    }
};

//main function
int main(){
    vector<int> nums={2,7,11,15};
    int target=9;

    solution s;
    vector<int> ans=s.twosum(nums,target);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}