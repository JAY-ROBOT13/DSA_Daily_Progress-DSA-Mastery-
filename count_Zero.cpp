// given an array arr of onnly 0's and 1's the array is sorted in such a manner that the 1's are placed first and then they're followed by all the 0's. find the count of all the 0's in the array.

#include<iostream>
class solution{
    public:
    int countzeros(int arr[], int n){
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                count++;
            }
        }
        return count;
    }
};

//driver code
int main(){
    int arr[]={1,1,1,0,0,0};
    int n=6;
    solution s;
    int count=s.countzeros(arr,n);
    std::cout<<"cout of zeros in the array is:"<<count<<std::endl;
    return 0;
}