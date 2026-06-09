//27.REMOVE ELEMENT:
//Given an integer array "nums" and an integer "val", remove all occurrates of "val" in "nums" in-place.the order of the elements may be changed. then return the number of elements in "nums" which are not equal to "val".consider the number of elements in "nums" which are not equal to "val" be "k" to get accepted, you need to do the following things.
//change the array "nums" such that the first "k" elements of "nums" contain the elements of "nums" are not important as well as  the size of "nums".
//return k;
//e.g., INPUT: nums=[3,2,2,3], val=3
//OUTPUT:2, nums=[2,2,_,_]

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int RemoveElement(vector<int>& nums, int val){
        int k=0;

        //for loop is use for iteration
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
        

    }
};

//main function
int main(){
    vector<int> nums={3,2,2,3};
    int val=3;

    solution obj;

    int k=obj.RemoveElement(nums,val);

    cout<<"k:"<<k<<endl;
    cout<<"Removing the array elements:";

    //loop is used for iteration
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}