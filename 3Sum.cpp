//15.3SUM problem 
//Given an integer array nums, return all the triplets [nums[i],nums[j],nums[k]] such that i!=j, i!=j, i!=k and j!=k and nums[i]+nums[j]+nums[k]==0
//e.g., INPUT: NUMS=[-1,0,1,2,-1,-4]
// OUTPUT: [[-1,-1,2],[-1,0,1]]
//EXPLANATION: NUMS[0]+NUMS[1]+NUMS[2]=(-1)+0+1=0
//nums[1]+nums[2]+nums[4]=0+1+(-1)=0
//nums[0]+nums[3]+nums[4]=(-1)+2+1=0
//the distinct triplets are [-1,0,1] and [-1,-1,2].
//NOtice that the order of the output and the order of the triplets does not matter

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    vector<vector<int>> threesum(vector<int> & nums){
        vector<vector<int>> ans;

        sort(nums.begin(),nums.end());
        int n=nums.size();

        //loop iteration
        for(int i=0;i<n-2;i++){
            //skip duplicate first element
            if(i>0 && nums[i]==nums[i-1])
            continue;

            int left=i+1;
            int right=n-1;

            while(left<right){
                int sum=nums[i]+nums[left]+nums[right];

                if(sum==0){
                    ans.push_back({nums[i],nums[left],nums[right]});

                //skip duplicates
                while(left<right && nums[left]==nums[left+1])
                left++;

                while(left<right && nums[right]==nums[right-1])
                right--;

                left++;
                right--;
                } else if(sum<0){
                    left++;
                } else{
                    right--;
                }
            }
        }
        return ans;

    }
};

//main function
int main(){
    vector<int> nums={-1,0,1,2,-1,-4};

    solution obj;
    vector<vector<int>> result=obj.threesum(nums);

    cout<<"Triplets are:\n";

    for(auto triplet: result){
        cout<<"[";
        for(int num: triplet){
            cout<<num<<" ";
        }
        cout<<"]\n";
    }
    return 0;
}