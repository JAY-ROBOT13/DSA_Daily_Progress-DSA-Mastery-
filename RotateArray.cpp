//189.Rotate Array
//Given an integer array nums, rotate the array to the right by 'k' steps, where 'k' is non-negative
//e.g., nums=[1,2,3,4,5,6,7]    ,       k=3
//Output:  [5,6,7,1,2,3,4]

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
public:
void rotate(vector<int>& nums, int k){
    int n=nums.size();
    k=k%n;   //if k is greater than n then we take the modulus of k with n to get the effective rotation steps

    //reverse the entire array
    reverse(nums.begin(),nums.end());

    //reverse the first k elements
    reverse(nums.begin(),nums.begin()+k);

    //reverse the remaining n-k elements
    reverse(nums.begin()+k,nums.end());

}
};

//main function
int main(){
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;

    solution obj;
    obj.rotate(nums,k);

    cout<<"The rotated array is:"<<endl;
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}