//209.MINIMUM SIZE SUBARRAY SUM:
//Given an array of positive integers "nums" and a positive integer "target", return the minimum length of a subarray whose sum is greater than or equal to "target" if there is no such subarray, return 0 instead.
//e.g., INPUT: target=7, nums=[2,3,1,2,4,3]
//OUTPUT: 2
//EXPLANATION: The subarray [4,3] has the minimal length under the problem constraint

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class solution{
    public:
    int minSubarray(vector<int>& nums,int target){
        int left=0;
        int sum=0;
        int minlen=INT_MAX;

        for(int right=0; right<nums.size();right++){
            sum+=nums[right];

            while(sum>=target){
                minlen=min(minlen, right-left+1);
                sum-=nums[left];
                left++;
            }
        }

        return (minlen==INT_MAX)? 0: minlen;
    }
};

//main function
int main(){
    vector<int> nums={2,3,1,2,4,3};
    int target=7;

    solution s;
    cout<<s.minSubarray(nums,target);
    return 0;
}