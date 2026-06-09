//283.MOVE ZERO
//Given an integer array "nums", move all 0's to the end of it while maintaining the relative order of the non-zeros elements.
//NOte that you must do this in-place without making a copy of the array

//e.g., INPUT: nums=[0,1,0,3,12]
//OUTPUT: [1,3,12,0,0]

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    void movezero(vector<int>& nums){
        int k=0;
        //Traverse the array
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }
        while(k<nums.size()){
            nums[k]=0;
            k++;
        }

    }
};

//main function
int main(){
    vector<int> nums={0,1,0,3,12};

    solution obj;
    obj.movezero(nums);
        cout<<"output is:";

        //for loop is used for iteration
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";

        }
        return 0;
    }