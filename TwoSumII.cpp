//167.TWO SUM II-INPUT ARRAY IS SORTED:
//GIVEN A 1-INDEXED ARRAY OF INTEGERS "NUMBERS" THAT'S ALREADY SORTED IN NON-DECREASING ORDER.FIND TWO NUMBERS SUCH THAT THEY ADD UP TO A SPECIFIC "TARGET" NUMBERS. LET THESE TWO NUMBERS BE NUMBERS[INDEX1] AND NUMBERS[INDEX2] WHERE 1<=INDEX1<INDEX2<=NUMBERS.LENGTH

//Return the indices of the two numbers index1 and index2, each incremented by one, as an integer array[index1,index2] of length2.
//the tests are generated such that there is exactly one solution you may not use the same length element twice

//e.g., INPUT: numbers=[2,7,11,15], target=9
//OUTPUT: [1,2] index
//Explanation: The sum of 2 and 7 is 9 therefore, index1=1,index2=2 we return 

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    vector<int> twosum(vector<int>& numbers, int target){

        int left=0;
        int right=numbers.size()-1;

        //while loop 
        while(left<right){
            int sum=numbers[left]+numbers[right];

            if(sum==target){
                return {left+1,right+1};
            } else if(sum<target){
                left++;
            } else{
                right--;
            }
        }

        return{};
    }
};

//main function
int main(){
    vector<int> numbers={2,7,11,15};
    int target=9;

    solution s;
    vector<int> ans=s.twosum(numbers,target);
    cout<<"["<<ans[0]<<","<<ans[1]<<"]";

    return 0;
}