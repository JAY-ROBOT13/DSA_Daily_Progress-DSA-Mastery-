//485.Max Consecutive Ones:
//Given a binary array nums,return the maximum number of consecutive 1's in the array
//e.g., Input: nums=[1,1,0,1,1,1]
//Output:3
//Explanation: The first two digits or the last three digits are consecutive 1s.The maximum number of consecutive 1s is 3.

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int findmaxconsecutive(vector<int>&nums){
        int count=0;
        int maxcount=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;                    //increase when value come to 1
                maxcount=max(maxcount,count);
            }
            else{
                count=0;
            }
        }
        return maxcount;
    }
};

//main function
int main(){
    vector<int> nums={1,1,0,1,1,1};
    solution s;

    // s.findmaxconsecutive(nums);
    cout<<"Maximum consecutive Ones: "<< s.findmaxconsecutive(nums);

    //for loop is used for iteration
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    }