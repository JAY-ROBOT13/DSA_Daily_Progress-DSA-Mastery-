//Problem based on : Reverse an array in groups 
// Given an array arr[] of positive integers.Reverse every sub-array group of size k.
// input: arr[]={1,2,3,4},   k=1        output: {4,3,2,1}

#include<iostream>
#include<vector>
#include<algorithm>

class solution{
    public:
    void reverseInGroups(std::vector<int> &arr,int k){
        //for loop 
        for(int i=0;i<arr.size();i+=k){
            if(i+k-1 < arr.size()){
                std::reverse(arr.begin()+i,arr.begin()+i+k);    //std::reverse is a built in function in cpp that is used to reverse the elements in a range. It takes two iterators as arguments, the first iterator points to the beginning of the range and the second iterator points to the end of the range. The function reverses the order of the elements in the specified range. In this case, we are reversing the sub-array starting from index i and ending at index i+k;
            }
            else{
                std::reverse(arr.begin()+i,arr.end());   //if the remaining elements in the array are less than k, we reverse the remaining elements from index i to the end of the array.
            }
        }
    }
};

//main function to test the deriven class
int main(){
    std::vector<int> arr={1,2,3,4};
    int k=2;

    //creating an object of the solution class
    solution s;
    s.reverseInGroups(arr,k);
    std::cout<<"The reversed array in groups is:"<<std::endl;
    for(int i=0;i<arr.size();i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    return 0;
}