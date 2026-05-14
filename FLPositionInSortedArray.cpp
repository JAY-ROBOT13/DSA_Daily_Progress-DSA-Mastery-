//34.find first and last position of element in sorted array.
//Given an array of integers 'nums' sorted in non-decreasing order,find the starting and ending position of a given 'target' value.if 'target' is not found in the array return [-1,-1].You must write an algorithm with O(log n) runtime complexity.
//e.g., Input: nums:[5,7,7,8,8,10],         target=8
//          Output:[3,4]

// #include<iostream>
// #include<vector>
// using namespace std;

// //class name is solution
// class solution{
//     public:
//     vector<int>searchRange(std::vector<int> &nums, int target){
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==target){
//                 return i;
//             } 
//             else if(nums[i]>target){
//                 return i;
//             }
//         } 
//         return nums.size();
//         }
//     };

//     //main function
//     int main(){
//         std::vector<int> nums={5,7,7,8,8,10};
//         int target=8;

//         solution s;
//         vector<int> result=s.searchRange(nums,target);
//         std::cout<<"The target value is found at index:"<<result<<endl;
//         return 0;
//     }

#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
vector<int>SearchRange(std::vector<int>& nums,int target){
    int first=-1;
    int last=-1;
    //for loop run
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            if(first==-1){
                first = i;
            }
            last=i;
        }
    }
        return{first,last};
    }
    
};

//main function
int main(){
    vector<int> nums={5,7,7,8,8,10};
    int target=8;

    solution s;
    vector<int> result=s.SearchRange(nums,target);
    cout<<"first position:"<<result[0]<<endl;
    cout<<"Last Position:"<<result[1]<<endl;

    return 0;
}