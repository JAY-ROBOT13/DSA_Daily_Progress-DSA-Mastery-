// Traverse the array in reverse order
//you're given an aray arr[] that contains integers you need to print the elements of the array with in reverse ordre eith an in a single with space between them
// input: arr[]={54,43,2,1,5};      output: "5 1 2 43 54"
// Explanation: "Just traverse in reverse and print the numbers with space between them"

//NOTE:In online coding platforms like LEETCODE AND GFG, the driven code is already provided and we just need to write the logic in the user function template provided to us. we just need to write the logic in the user function template and then we can test our code by running the driven code.

#include<iostream>

class solution{
    public:
    void TraverseArray(int numbers[],int size){
        for(int i=size-1;i>=0;i--){
            std::cout<<numbers[i]<<" ";

        }
    }
};

//driven code: it means the code that is used to test the function and already given in the problem stmt
int main(){
    int numbers[]={54,43,2,1,5};
    int size=5;

    //creating an object of the solution class
    solution s;
    s.TraverseArray(numbers,size);

    return 0;
}

