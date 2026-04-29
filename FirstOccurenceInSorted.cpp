//  FIRST OCCURENCE IN SORTED ARRAY
// when a sorted array arr[] and an integer 'k', find the position 0-based indexing  at which 'k' is present in the aray using binary search. If 'k' doesn't exist in arr[] return -1.
// e.g., arr[]=[1,2,3,4,5]  , k=4
// output=4       EXPLANATION: 4 apperars at index '3' in the array

#include<iostream>
#include<vector>
using namespace std;

class solution{             //it's a class named solution is called solution and it has a public memeber function named firstOccurence that takes a vector of integers and an integer k as input and returns an integer as output.
    public:
    int firstOccurence(vector<int>& arr, int k){
        for(int i=0;i<arr.size();i++){
            if(arr[i]==k){                  //if the element at index 'i' is equal to 'k', then we have found the first occurrence of 'k'
                return i;
            }
        }
        return -1;
    }
};

//main function
int main(){

    //input
    vector<int> arr={1,2,3,4,5};
    int k=4;
    solution obj;
    std::cout<<obj.firstOccurence(arr,k)<<std::endl;
    return 0;
}