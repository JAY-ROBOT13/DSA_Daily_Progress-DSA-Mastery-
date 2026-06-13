//977.SQUARE OF A SORTED ARRAY:
//Given an integer array "nums" sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
//e.g., nums=[-4,-1,0,3,10]
//Output: [0,1,9,16,10]
//EXPLANATION: After squaring the array becomes [16,1,0,9,100], After sorting it becomes [0,1,9,16,100]

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:

    vector<int> sortedsquare(vector<int> & nums){

        int n=nums.size();
        vector<int> result(n);

        int left=0;
        int right=n-1;

        int pos=n-1;

        while(left<=right){
            int leftsquare=nums[left]*nums[left];
            int rightsquare=nums[right]*nums[right];

            if(leftsquare>rightsquare){
                result[pos]=leftsquare;
                left++;
            }
            else{
                result[pos]=rightsquare;
                right--;
            }
            pos--;
        }
        return result;
}

};

//main function
int main(){
    vector<int> nums={-4,-1,0,3,10};
    solution s;
    vector<int> ans=s.sortedsquare(nums);

    cout<<"sorted squares: ";

    for(int x: ans){
        cout<< X  <<" ";
    }
    return 0;
}