// TOPIC : SINGLE NUMBER
// Given a non-empty array of integers, every element apperas twice except for one, find that single one. you must implment a solution with a linear runtiome complexity and we only constant extra space.
// e.g., input: nums=[2,2,1]            output: 1

#include<iostream>
#include<vector>
class solution{
    public:
    int singleNumber(std::vector<int> &nums){
        //for loop is used to find the single number in the array
        for(int i=0;i<nums.size();i++){     //outer for loop is used to iterate through each element in the array
            int count=0;       //count variable is used to count the number of times the current element apperars in the array
            for(int j=0;j<nums.size();j++){   //nested for loop is used to compare the current element with all the other elements in the array
                if(nums[i]==nums[j]){     //if the current element is equal to the element at index j, we increment the count variable by 1
                    count++;

            }
            else if(count==1){
                return nums[i];        //if the count variable is equal to 1, it means that the current element apperars only once in the array, so we return that element as the single number.

            }

        else{
            return -1;
        }
    }
}
}
};

//main function to test the deriven class
int main(){
    std::vector<int> nums={2,2,1};

    //creating an object of the solution class
    solution s;
    int result=s.singleNumber(nums);
    std::cout<<"The single number in the array is:"<<result<<std::endl;
    return 0;
}