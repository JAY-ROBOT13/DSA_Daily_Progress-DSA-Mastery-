//643.Maximum Average SubArray I:
//You're given an integer array "nums" consisting of n-elements, and an integers 'k'.
//find a contiguous subarray whose length is equal to 'r' tht has the maximum average value an return this value.Any answer with a calculation error less than 10^-5 will be accepted.
//INPUT: nums: [1,12,-5,-6,50,3]        k=4
//OUTPUT: 12.75000
//EXPLANATION: MAXIMUM AVERAGE IS : (12-5-6+50)/4=51/4=12.75

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    double findmaxaverage(vector<int>& nums, int k){
        long long windowsum=0;

        //first window
        for(int i=0;i<k;i++){
            windowsum +=nums[i];
        }

        long long maxsum=windowsum;

        //sliding window
        for(int i=k;i<nums.size();i++){
            windowsum += nums[i]-nums[i-k];
            maxsum=max(maxsum,windowsum);
        }

        return (double)maxsum/k;
    }
};

//main function
int main(){
    vector<int> nums={1,12,-5,-6,50,3};
    int k=4;

    solution obj;
    double ans=obj.findmaxaverage(nums,k);

    cout<<"Maximum Average: "<<ans<<endl;

    return 0;
}