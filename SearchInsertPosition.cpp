// Given a  sorted array of distinct intergers and a target value, return the index if the target is found. if not , return the index where it would be if it were inserted in order.
// you must write an algorithm with O(log n) runtime complexity.
// Input: nums=[1,2,5,6],  target=5 and output : 2

#include<iostream>
#include<vector>

class solution{
    public:
    int searchInsert(std::vector<int>& nums, int target){
        //for loop is used to find the target value in the array
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            else if(nums[i]>target){                //if the current element is greater than the target value, it means that the target value should be inserted before the current element to maintain the sorted order. Therefore, we return the current index i as the position where the target value would be inserted.
                return i;
            }

        }
        return nums.size();          //if the target value is greater than all the elements in the array, it will be inserted at the end of the array, so we return the size of the array as the index where it would be inserted.
    }
};

//main function to test the deriven class
int main(){
    std::vector<int> nums={1,2,3,4,5};
    int target=3;

    //creating an object of the solution class
    solution s;
    int result=s.searchInsert(nums,target);
    std::cout<<"The target value is found at index:"<<result<<std::endl;
    return 0;
}