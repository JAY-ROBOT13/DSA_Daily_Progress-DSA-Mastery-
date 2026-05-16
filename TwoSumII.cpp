//Topic is : 167.Two Sum ii - Input Array is sorted
//Given a 1-indexed array of integers "numbers" that is already sorted in non-decreasing order,find two numbers such that they add up to a specific "target" number. Let these two numbers be numbers[index1]  and numbers[index2] where "1<=index1<index2<=numbers.length" 
// Return the indices of the two numbers index2 and index2 each incremented by one as an integer array [index1,index2] of length2.
//e.g., Input: numbers=[2,7,11,15], target=9   , output:[1,2]

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int>twosum(vector<int>& numbers, int target){
        // //for loop for iteration 
        // for(int i=0;i<numbers.size();i++){
        //     if(numbers[i]+=target)
        //     return target;

        int left=0;
        int right=numbers.size()-1;

        while(left<right){
            int sum=numbers[left]+numbers[right];

            if(sum==target){
                //bcz we add plus one both side because due to indexing
                return{left+1,right+1};
            }
            else if(sum<target){
                left++;

            } else{
                right--;
            }
        }
        return {};
        }
    };

//main function
int main(){

    vector<int> numbers={2,7,11,15};
    int target=9;

    solution s;
    vector<int> ans=s.twosum(numbers,target);
    cout<<ans[0]<<" "<<ans[1] ;
    return 0;
}
