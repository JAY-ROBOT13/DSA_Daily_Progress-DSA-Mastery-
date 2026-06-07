//1929. Concatenation of Array
//Given an integer array 'nums'of length 'n',you want to create an array 'ans' of length '2n' where 'ans[i]==nums[i]' and 'ans[i+n]==nums[i]' for 0<=i<n(0-indexed).specially, 'ans' is the concatenation of two 'nums' arrays return the array 'ans'.

//input: nums=[1,2,1]
//output:[1,2,1,1,2,1]

//logic: 
//step-i: we will create a new array of size 2*n and then we will fill the first n elements of the new array with the elements of the original array and then we will fill the next n elements of the new array with the elements of the original array again.
//code logic via syntax: ans[i]=nums[i%n];
// step-ii: we will return the new array.
//syntax: return ans;

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int> getConcatenation(vector<int>& nums){
        int n=nums.size();
        vector<int> ans(2*n);       //creating a new array of size 2*n
    //for loop iteration
    for(int i=0;i<2*n;i++){
        ans[i]=nums[i%n];
    }
    return ans;
    }
};

//main function
int main(){
    vector<int> nums={1,2,1};
    solution s;
    vector<int> ans=s.getConcatenation(nums);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}


//Time Complexity: O(n)
//Space Complexity: O(1)