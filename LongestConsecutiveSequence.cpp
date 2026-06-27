//128.LONGEST CONSECUTIVE SEQUENCE:
//Given an unsorted array of integers nums return the length of the longest consecutive element sequence.
// You must write an algorithm that runs in O(n) time.
//e.g., INPUT: nums:[100,4,200,1,3,2]
//OUTPUT: 4
//Explanation: The longest consecutive elements sequence is [1,2,3,4].Therefore its length is 4

#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

class solution{
    public:
    int longesConsecutiveElement(vector<int>&nums){

        //if the array is empty
        if(nums.empty()){
            return 0;
        }
        //create a hash set to store all numbers
        unordered_set<int> st;

        for(int num : nums){
            st.insert(num);
        }
        int longest=0;

        //traverse every number
        for(int num : nums){
            //check if it is the start of a sequence
            if(st.find(num-1)==st.end()){
                int current = num;
                int length = 1;

                //count consecutive numbers
                while(st.find(current+1) != st.end()){
                    current++;
                    length++;
                }
                longest = max(longest,length);
            }
        }
        return longest;

    }

};

//main function
int main(){
    vector<int> nums={100,4,200,1,3,2};
    solution obj;

    cout<<"Longest consecutive Sequence length: "<<obj.longesConsecutiveElement(nums)<<endl;
    return 0;
}