// Topic is: Max Consecutive Ones
//Given a binary array nums, return the maximum number of  consecutive 1's in the array
//Input: nums=[1,1,0,1,1,1]  and output: 3

#include<iostream>
#include<vector>
using namespace std;

class solution{                                 //creating a class named solution
    public:
    int findmaxconsecutiveones(std::vector<int>&  nums){
        int count=0;                           //initializing a variable count to keep track the number of consecutive ones
        int maxcount=0;             //initializing a variable maxcount to keep track the maximum number of consecutive ones
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                maxcount=max(maxcount,count);      //updating the maxcount variable with the maximum of the current maxcount and count
                count=0;
            }
            }
            maxcount=max(maxcount,count);     
            return maxcount;
        }
    };
//main function to test the deriven class
int main(){
    std::vector<int> nums={1,1,0,1,1,1};

    //creating an object of the solution class
    solution s;
    int result=s.findmaxconsecutiveones(nums);
    std::cout<<"The maximum number of consecutive ones is:"<<result<<std::endl;
    return 0;
}      