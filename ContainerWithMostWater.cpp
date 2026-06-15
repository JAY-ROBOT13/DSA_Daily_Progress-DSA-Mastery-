//11.CONTAINER WITH MOST WATER:
//You're given an integer array "height" of length 'n' there are 'n' vertical lines drawn such that the two endpoints of the ith line are(i,0) and (i,height[i])
//find two lines that together with the x-axis form a container such that the container contains the most water
//return the maximum amount of water a container can store.
//e.g., Input: height=[1,8,6,2,5,4,8,3,7]
//Output: 49

#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int maxArea(vector<int>& height){
        int left=0;
        int right=height.size()-1;
        int maxwater=0;

        while(left<right){
            int width=right-left;
            int currentHeight=min(height[left], height[right]);
            int area=width*currHeight;

            maxwater=max(maxwater,area);

            if(height[left]<height[right]){
                left++;
            } else{
                right--;
            }
        }
        return maxwater;

    }
};

//main function
int main(){
    solution s;
    vector<int> height={1,8,6,2,5,4,8,3,7};
    cout<<s.maxArea(height);

    return 0;
}