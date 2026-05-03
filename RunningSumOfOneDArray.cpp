//Topic is: Running Sum of 1D array
// Given an array "nums" we define a running sum of an array as runningsum[i]=sum(num[0]...num[i]).Return the running sum of nums
//Input: nums=[1,2,3,4]        and      Output:[1,3,6,10]

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int> runningsum(vector<int>& nums){
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i]+nums[i-1];          //It means the value is sum of the previous value + current vaue 
        }
        return nums;
    }
};
//main function for driven class
int main(){
   std:: vector<int> nums = {1,2,3,4};
    vector<int> result;

    //make class object
    solution s;
    result = s.runningsum(nums);
    std::cout << "sum of the running element is:";
    for(int num : result) {
        std::cout << num << " ";
    }
    std::cout << endl;
}
